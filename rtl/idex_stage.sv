import riscv_pkg::*;

// Stage 2 -- Decode / Register-read / Execute.
// Decodes the instruction latched by stage 1, reads the register file
// (forwarding in the one write-back-to-read RAW hazard this pipeline can
// have), runs the ALU, and resolves branches/jumps. branch_taken/target
// feed back into stage 1 combinationally, this same cycle. Its own output
// (the ID_EX/MEM_WB pipeline register) is registered here.
module idex_stage (
    input  logic             clk,
    input  logic             rst_n,

    input  if_idex_reg_t     f,

    // register-file write port, driven by stage 3 (combinational this cycle)
    input  logic [4:0]       memwb_rd,
    input  logic [31:0]      memwb_wb_data,
    input  logic             memwb_reg_write,

    output logic              branch_taken,
    output logic [31:0]       branch_target,

    output idex_memwb_reg_t   d
);

  logic [4:0]   rs1, rs2, rd;
  logic [2:0]   funct3;
  logic         reg_write, mem_read, mem_write, branch, jump;
  alu_op_e      alu_op;
  alu_asel_e    alu_asel;
  alu_bsel_e    alu_bsel;
  imm_type_e    imm_type;

  decoder u_decoder (
      .instr     (f.instr),
      .rs1       (rs1),
      .rs2       (rs2),
      .rd        (rd),
      .funct3    (funct3),
      .reg_write (reg_write),
      .alu_op    (alu_op),
      .alu_asel  (alu_asel),
      .alu_bsel  (alu_bsel),
      .imm_type  (imm_type),
      .mem_read  (mem_read),
      .mem_write (mem_write),
      .branch    (branch),
      .jump      (jump)
  );

  logic [31:0] imm;
  imm_gen u_imm_gen (
      .instr     (f.instr),
      .imm_type  (imm_type),
      .imm       (imm)
  );

  logic [31:0] rs1_data, rs2_data;
  regfile u_regfile (
      .clk      (clk),
      .rs1_addr (rs1),
      .rs2_addr (rs2),
      .rs1_data (rs1_data),
      .rs2_data (rs2_data),
      .rd_addr  (memwb_rd),
      .rd_data  (memwb_wb_data),
      .rd_wen   (memwb_reg_write)
  );

  logic forward_a, forward_b;
  hazard_unit u_hazard (
      .rs1             (rs1),
      .rs2             (rs2),
      .memwb_rd        (memwb_rd),
      .memwb_reg_write (memwb_reg_write),
      .forward_a       (forward_a),
      .forward_b       (forward_b)
  );

  logic [31:0] rs1_val, rs2_val;
  assign rs1_val = forward_a ? memwb_wb_data : rs1_data;
  assign rs2_val = forward_b ? memwb_wb_data : rs2_data;

  logic [31:0] alu_a, alu_b, alu_result;
  always_comb begin
    unique case (alu_asel)
      ASEL_REG:  alu_a = rs1_val;
      ASEL_PC:   alu_a = f.pc;
      ASEL_ZERO: alu_a = 32'd0;
      default:   alu_a = rs1_val;
    endcase
  end
  assign alu_b = (alu_bsel == BSEL_REG) ? rs2_val : imm;

  alu u_alu (
      .op     (alu_op),
      .a      (alu_a),
      .b      (alu_b),
      .result (alu_result)
  );

  // Branch condition, evaluated directly on the (forwarded) operands.
  logic cond_true;
  always_comb begin
    unique case (funct3)
      3'b000:  cond_true = (rs1_val == rs2_val);                       // BEQ
      3'b001:  cond_true = (rs1_val != rs2_val);                       // BNE
      3'b100:  cond_true = ($signed(rs1_val) <  $signed(rs2_val));     // BLT
      3'b101:  cond_true = ($signed(rs1_val) >= $signed(rs2_val));     // BGE
      3'b110:  cond_true = (rs1_val <  rs2_val);                       // BLTU
      3'b111:  cond_true = (rs1_val >= rs2_val);                       // BGEU
      default: cond_true = 1'b0;
    endcase
  end

  assign branch_taken  = f.valid && ((branch && cond_true) || jump);
  // alu_result is pc+imm (JAL/branch) or rs1+imm (JALR); bit0 is forced to
  // 0 per spec (only matters, and is only nonzero, for JALR).
  assign branch_target = {alu_result[31:1], 1'b0};

  wb_sel_e wb_sel;
  assign wb_sel = mem_read ? WB_MEM : (jump ? WB_PC4 : WB_ALU);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      d <= '0;
    end else begin
      d.valid      <= f.valid;
      d.rd         <= rd;
      d.reg_write  <= f.valid && reg_write;
      d.wb_sel     <= wb_sel;
      d.mem_read   <= f.valid && mem_read;
      d.mem_write  <= f.valid && mem_write;
      d.funct3     <= funct3;
      d.alu_result <= alu_result;
      d.store_data <= rs2_val;
      d.pc_plus4   <= f.pc_plus4;
    end
  end

endmodule : idex_stage

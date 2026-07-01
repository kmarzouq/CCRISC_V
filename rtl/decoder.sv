import riscv_pkg::*;

// Combinational instruction decode: instruction bits -> control signals.
// FENCE/ECALL/EBREAK/unimplemented opcodes decode to a register-write-less
// no-op (no CSRs/traps are implemented -- see README "Known limitations").
module decoder (
    input  logic [31:0] instr,

    output logic [4:0]  rs1,
    output logic [4:0]  rs2,
    output logic [4:0]  rd,
    output logic [2:0]  funct3,

    output logic        reg_write,
    output alu_op_e      alu_op,
    output alu_asel_e    alu_asel,
    output alu_bsel_e    alu_bsel,
    output imm_type_e    imm_type,
    output logic        mem_read,
    output logic        mem_write,
    output logic        branch,
    output logic        jump
);

  logic [6:0] opcode;
  logic       is_alt; // funct7[5], distinguishes SUB/SRA from ADD/SRL

  assign opcode  = instr[6:0];
  assign rd      = instr[11:7];
  assign funct3  = instr[14:12];
  assign rs1     = instr[19:15];
  assign rs2     = instr[24:20];
  assign is_alt  = instr[30];

  // ALU op is only actually selected by funct3 for OP / OP-IMM (+ is_alt
  // for ADD/SUB and SRL/SRA; SUBI does not exist, so is_alt is ignored for
  // funct3==000 on OP-IMM). Every other opcode uses the ALU purely as an
  // adder (address/target calculation, or passing an immediate through for
  // LUI) -- funct3 there encodes something else entirely (branch
  // condition, memory access width, or raw immediate bits) and must NOT be
  // treated as an ALU op selector.
  logic op_is_rtype, op_uses_funct3;
  assign op_is_rtype    = (opcode == OPC_OP);
  assign op_uses_funct3 = (opcode == OPC_OP) || (opcode == OPC_OPIMM);

  always_comb begin
    if (!op_uses_funct3) begin
      alu_op = ALU_ADD;
    end else begin
    unique case (funct3)
      3'b000:  alu_op = (op_is_rtype && is_alt) ? ALU_SUB : ALU_ADD;
      3'b001:  alu_op = ALU_SLL;
      3'b010:  alu_op = ALU_SLT;
      3'b011:  alu_op = ALU_SLTU;
      3'b100:  alu_op = ALU_XOR;
      3'b101:  alu_op = is_alt ? ALU_SRA : ALU_SRL;
      3'b110:  alu_op = ALU_OR;
      3'b111:  alu_op = ALU_AND;
      default: alu_op = ALU_ADD;
    endcase
    end
  end

  always_comb begin
    // defaults: architectural no-op
    reg_write = 1'b0;
    alu_asel  = ASEL_REG;
    alu_bsel  = BSEL_IMM;
    imm_type  = IMM_I;
    mem_read  = 1'b0;
    mem_write = 1'b0;
    branch    = 1'b0;
    jump      = 1'b0;

    unique case (opcode)
      OPC_OP: begin
        reg_write = 1'b1;
        alu_asel  = ASEL_REG;
        alu_bsel  = BSEL_REG;
      end

      OPC_OPIMM: begin
        reg_write = 1'b1;
        alu_asel  = ASEL_REG;
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_I;
      end

      OPC_LUI: begin
        reg_write = 1'b1;
        alu_asel  = ASEL_ZERO;
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_U;
      end

      OPC_AUIPC: begin
        reg_write = 1'b1;
        alu_asel  = ASEL_PC;
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_U;
      end

      OPC_JAL: begin
        reg_write = 1'b1;
        jump      = 1'b1;
        alu_asel  = ASEL_PC;   // alu_result = pc + imm = jump target
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_J;
      end

      OPC_JALR: begin
        reg_write = 1'b1;
        jump      = 1'b1;
        alu_asel  = ASEL_REG;  // alu_result = rs1 + imm = jump target
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_I;
      end

      OPC_BRANCH: begin
        branch    = 1'b1;
        alu_asel  = ASEL_PC;   // alu_result = pc + imm = branch target
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_B;
      end

      OPC_LOAD: begin
        reg_write = 1'b1;
        mem_read  = 1'b1;
        alu_asel  = ASEL_REG;
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_I;
      end

      OPC_STORE: begin
        mem_write = 1'b1;
        alu_asel  = ASEL_REG;
        alu_bsel  = BSEL_IMM;
        imm_type  = IMM_S;
      end

      default: ; // OPC_MISC (FENCE), OPC_SYSTEM (ECALL/EBREAK), illegal: no-op
    endcase
  end

endmodule : decoder

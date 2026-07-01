import riscv_pkg::*;

// Stage 3 -- Data Memory / Writeback.
// Data memory is read combinationally, so a load's value is available this
// same cycle and can be forwarded straight back into stage 2 -- no
// load-use stall is needed (see README "Known limitations").
module memwb_stage (
    input  idex_memwb_reg_t  d,

    output logic [31:0]      dmem_addr,
    output logic [31:0]      dmem_wdata,
    output logic [3:0]       dmem_wstrb,
    output logic             dmem_we,
    input  logic [31:0]      dmem_rdata,

    output logic [4:0]       memwb_rd,
    output logic [31:0]      memwb_wb_data,
    output logic             memwb_reg_write
);

  logic [1:0] byte_off;
  assign byte_off  = d.alu_result[1:0];
  assign dmem_addr = d.alu_result;
  assign dmem_we   = d.mem_write;

  // ---- Store path: replicate the value into every lane; wstrb picks the
  // lane(s) that actually get written, so the replication needs no shift.
  always_comb begin
    unique case (d.funct3[1:0])
      2'b00:   dmem_wdata = {4{d.store_data[7:0]}};
      2'b01:   dmem_wdata = {2{d.store_data[15:0]}};
      default: dmem_wdata = d.store_data;
    endcase
  end

  always_comb begin
    if (!d.mem_write) begin
      dmem_wstrb = 4'b0000;
    end else begin
      unique case (d.funct3[1:0])
        2'b00:   dmem_wstrb = 4'b0001 << byte_off;
        2'b01:   dmem_wstrb = 4'b0011 << byte_off;
        default: dmem_wstrb = 4'b1111;
      endcase
    end
  end

  // ---- Load path: pick + sign/zero-extend the addressed byte/half/word.
  logic [31:0] shifted;
  logic [31:0] load_data;
  assign shifted = dmem_rdata >> (byte_off * 8);

  always_comb begin
    unique case (d.funct3)
      3'b000:  load_data = {{24{shifted[7]}},  shifted[7:0]};  // LB
      3'b001:  load_data = {{16{shifted[15]}}, shifted[15:0]}; // LH
      3'b010:  load_data = dmem_rdata;                          // LW
      3'b100:  load_data = {24'd0, shifted[7:0]};                // LBU
      3'b101:  load_data = {16'd0, shifted[15:0]};               // LHU
      default: load_data = dmem_rdata;
    endcase
  end

  logic [31:0] wb_data;
  always_comb begin
    unique case (d.wb_sel)
      WB_ALU:  wb_data = d.alu_result;
      WB_MEM:  wb_data = load_data;
      WB_PC4:  wb_data = d.pc_plus4;
      default: wb_data = d.alu_result;
    endcase
  end

  assign memwb_rd        = d.rd;
  assign memwb_wb_data   = wb_data;
  assign memwb_reg_write = d.reg_write;

endmodule : memwb_stage

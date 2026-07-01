import riscv_pkg::*;

// Forwarding decision for the single RAW hazard distance in this 3-stage
// pipeline: the instruction in stage 3 (MEM/WB) writes the register that
// the instruction in stage 2 (ID/EX) is about to read, one cycle later.
module hazard_unit (
    input  logic [4:0] rs1,
    input  logic [4:0] rs2,
    input  logic [4:0] memwb_rd,
    input  logic       memwb_reg_write,
    output logic       forward_a,
    output logic       forward_b
);

  assign forward_a = memwb_reg_write && (memwb_rd != 5'd0) && (memwb_rd == rs1);
  assign forward_b = memwb_reg_write && (memwb_rd != 5'd0) && (memwb_rd == rs2);

endmodule : hazard_unit

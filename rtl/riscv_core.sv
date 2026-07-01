import riscv_pkg::*;

// Top-level 3-stage RV32I core. Harvard-style memory interface: a
// combinational-read instruction port and a combinational-read/
// synchronous-write data port, both driven at the byte-address level.
module riscv_core (
    input  logic        clk,
    input  logic        rst_n,

    output logic [31:0] imem_addr,
    input  logic [31:0] imem_rdata,

    output logic [31:0] dmem_addr,
    output logic [31:0] dmem_wdata,
    output logic [3:0]  dmem_wstrb,
    output logic        dmem_we,
    input  logic [31:0] dmem_rdata
);

  if_idex_reg_t   if_idex;
  idex_memwb_reg_t idex_memwb;

  logic        branch_taken;
  logic [31:0] branch_target;

  logic [4:0]  memwb_rd;
  logic [31:0] memwb_wb_data;
  logic        memwb_reg_write;

  if_stage u_if (
      .clk           (clk),
      .rst_n         (rst_n),
      .branch_taken  (branch_taken),
      .branch_target (branch_target),
      .imem_addr     (imem_addr),
      .imem_rdata    (imem_rdata),
      .if_idex_reg   (if_idex)
  );

  idex_stage u_idex (
      .clk             (clk),
      .rst_n           (rst_n),
      .f               (if_idex),
      .memwb_rd        (memwb_rd),
      .memwb_wb_data   (memwb_wb_data),
      .memwb_reg_write (memwb_reg_write),
      .branch_taken    (branch_taken),
      .branch_target   (branch_target),
      .d               (idex_memwb)
  );

  memwb_stage u_memwb (
      .d               (idex_memwb),
      .dmem_addr       (dmem_addr),
      .dmem_wdata      (dmem_wdata),
      .dmem_wstrb      (dmem_wstrb),
      .dmem_we         (dmem_we),
      .dmem_rdata      (dmem_rdata),
      .memwb_rd        (memwb_rd),
      .memwb_wb_data   (memwb_wb_data),
      .memwb_reg_write (memwb_reg_write)
  );

endmodule : riscv_core

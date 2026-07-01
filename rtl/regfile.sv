// 32 x 32-bit register file. x0 is hard-wired to zero.
// Combinational reads, synchronous write. Write-then-read forwarding is
// handled here so a same-cycle write and read of the same register sees
// the new value (used by the hazard/forwarding logic as a fallback).
module regfile (
    input  logic        clk,
    input  logic [4:0]  rs1_addr,
    input  logic [4:0]  rs2_addr,
    output logic [31:0] rs1_data,
    output logic [31:0] rs2_data,
    input  logic [4:0]  rd_addr,
    input  logic [31:0] rd_data,
    input  logic        rd_wen
);

  logic [31:0] regs [1:31];

  assign rs1_data = (rs1_addr == 5'd0) ? 32'd0 :
                     (rd_wen && rd_addr == rs1_addr) ? rd_data : regs[rs1_addr];

  assign rs2_data = (rs2_addr == 5'd0) ? 32'd0 :
                     (rd_wen && rd_addr == rs2_addr) ? rd_data : regs[rs2_addr];

  always_ff @(posedge clk) begin
    if (rd_wen && rd_addr != 5'd0) begin
      regs[rd_addr] <= rd_data;
    end
  end

endmodule : regfile

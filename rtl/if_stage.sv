import riscv_pkg::*;

// Stage 1 -- Instruction Fetch.
// Owns the PC register and the IF/ID_EX pipeline register. On a taken
// branch/jump (resolved combinationally in stage 2, same cycle), the PC is
// redirected and the instruction concurrently being fetched (wrong path)
// is squashed into an architectural NOP.
module if_stage (
    input  logic            clk,
    input  logic            rst_n,

    input  logic            branch_taken,
    input  logic [31:0]     branch_target,

    output logic [31:0]     imem_addr,
    input  logic [31:0]     imem_rdata,

    output if_idex_reg_t    if_idex_reg
);

  localparam logic [31:0] NOP = 32'h0000_0013; // addi x0, x0, 0
  localparam logic [31:0] RESET_PC = 32'h0000_0000;

  logic [31:0] pc_q, pc_next;

  assign imem_addr = pc_q;
  assign pc_next   = branch_taken ? branch_target : (pc_q + 32'd4);

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) pc_q <= RESET_PC;
    else        pc_q <= pc_next;
  end

  always_ff @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
      if_idex_reg <= '0;
    end else if (branch_taken) begin
      if_idex_reg.valid    <= 1'b0;
      if_idex_reg.pc       <= pc_q;
      if_idex_reg.pc_plus4 <= pc_q + 32'd4;
      if_idex_reg.instr    <= NOP;
    end else begin
      if_idex_reg.valid    <= 1'b1;
      if_idex_reg.pc       <= pc_q;
      if_idex_reg.pc_plus4 <= pc_q + 32'd4;
      if_idex_reg.instr    <= imem_rdata;
    end
  end

endmodule : if_stage

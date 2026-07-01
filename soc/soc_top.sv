// Simulation SoC shell: core + Harvard memories + the tohost/UART MMIO
// used by the test harness. Not meant to be synthesized onto real memory
// hardware -- it exists to give the Verilator testbench something to load
// a program into and to observe pass/fail on.
module soc_top #(
    parameter int    MEM_BYTES = 65536, // 64 KiB per memory
    parameter string INIT_FILE = ""
) (
    input  logic        clk,
    input  logic        rst_n,

    output logic        tohost_wr,
    output logic [31:0] tohost_data,
    output logic        uart_wr,
    output logic [7:0]  uart_data
);

  localparam logic [31:0] TOHOST_ADDR = 32'h1000_0000;
  localparam logic [31:0] UART_ADDR   = 32'h1000_0004;

  logic [31:0] imem_addr, imem_rdata;
  logic [31:0] dmem_addr, dmem_wdata, dmem_rdata_ram;
  logic [3:0]  dmem_wstrb;
  logic        dmem_we;

  logic is_tohost, is_uart, is_ram;
  assign is_tohost = (dmem_addr == TOHOST_ADDR);
  assign is_uart   = (dmem_addr == UART_ADDR);
  assign is_ram    = !is_tohost && !is_uart;

  riscv_core u_core (
      .clk        (clk),
      .rst_n      (rst_n),
      .imem_addr  (imem_addr),
      .imem_rdata (imem_rdata),
      .dmem_addr  (dmem_addr),
      .dmem_wdata (dmem_wdata),
      .dmem_wstrb (dmem_wstrb),
      .dmem_we    (dmem_we),
      .dmem_rdata (dmem_rdata_ram)
  );

  imem #(
      .MEM_BYTES (MEM_BYTES),
      .INIT_FILE (INIT_FILE)
  ) u_imem (
      .addr  (imem_addr),
      .rdata (imem_rdata)
  );

  dmem #(
      .MEM_BYTES (MEM_BYTES),
      .INIT_FILE (INIT_FILE)
  ) u_dmem (
      .clk   (clk),
      .addr  (dmem_addr),
      .wdata (dmem_wdata),
      .wstrb (is_ram ? dmem_wstrb : 4'b0000),
      .we    (dmem_we && is_ram),
      .rdata (dmem_rdata_ram)
  );

  assign tohost_wr   = dmem_we && is_tohost;
  assign tohost_data = dmem_wdata;
  assign uart_wr     = dmem_we && is_uart;
  assign uart_data   = dmem_wdata[7:0];

endmodule : soc_top

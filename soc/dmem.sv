// Behavioral data memory: byte-addressable, combinational read,
// synchronous byte-enabled write. Initialized from the same hex image as
// imem (see README -- Harvard split, both memories loaded with the same
// program image).
module dmem #(
    parameter int    MEM_BYTES = 65536, // 64 KiB
    parameter string INIT_FILE = ""
) (
    input  logic        clk,
    input  logic [31:0] addr,
    input  logic [31:0] wdata,
    input  logic [3:0]  wstrb,
    input  logic        we,
    output logic [31:0] rdata
);

  localparam int ADDR_BITS = $clog2(MEM_BYTES);

  logic [7:0] mem [0:MEM_BYTES-1];

  // See imem.sv: loaded at run time via +HEXFILE=<path> so the same
  // compiled binary works for every test program.
  initial begin
    string hexfile;
    if ($value$plusargs("HEXFILE=%s", hexfile)) begin
      $readmemh(hexfile, mem);
    end else if (INIT_FILE != "") begin
      $readmemh(INIT_FILE, mem);
    end
  end

  logic [31:0] addr_p1, addr_p2, addr_p3;
  assign addr_p1 = addr + 32'd1;
  assign addr_p2 = addr + 32'd2;
  assign addr_p3 = addr + 32'd3;

  wire [ADDR_BITS-1:0] a0 = addr[ADDR_BITS-1:0];
  wire [ADDR_BITS-1:0] a1 = addr_p1[ADDR_BITS-1:0];
  wire [ADDR_BITS-1:0] a2 = addr_p2[ADDR_BITS-1:0];
  wire [ADDR_BITS-1:0] a3 = addr_p3[ADDR_BITS-1:0];

  assign rdata = {mem[a3], mem[a2], mem[a1], mem[a0]};

  always_ff @(posedge clk) begin
    if (we) begin
      if (wstrb[0]) mem[a0] <= wdata[7:0];
      if (wstrb[1]) mem[a1] <= wdata[15:8];
      if (wstrb[2]) mem[a2] <= wdata[23:16];
      if (wstrb[3]) mem[a3] <= wdata[31:24];
    end
  end

endmodule : dmem

// Behavioral instruction memory: byte-addressable, combinational read,
// initialized from a Verilog-hex file (as produced by
// `objcopy -O verilog`, which is a byte stream) at elaboration time.
module imem #(
    parameter int    MEM_BYTES = 65536, // 64 KiB
    parameter string INIT_FILE = ""
) (
    input  logic [31:0] addr,
    output logic [31:0] rdata
);

  localparam int ADDR_BITS = $clog2(MEM_BYTES);

  logic [7:0] mem [0:MEM_BYTES-1];

  // The hex image is normally supplied at run time via +HEXFILE=<path>,
  // so a single compiled Verilator binary can be reused across every
  // test program. INIT_FILE is a compile-time fallback for other flows.
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

  assign rdata = {mem[addr_p3[ADDR_BITS-1:0]],
                   mem[addr_p2[ADDR_BITS-1:0]],
                   mem[addr_p1[ADDR_BITS-1:0]],
                   mem[addr[ADDR_BITS-1:0]]};

endmodule : imem

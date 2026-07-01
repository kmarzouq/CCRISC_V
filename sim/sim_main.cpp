// Verilator testbench harness for soc_top.
//
// Usage: sim_soc +HEXFILE=<path> [+VCD=<path>] [+MAXCYCLES=<n>]
//
// HEXFILE is read at run time by imem.sv/dmem.sv via $value$plusargs, so
// a single compiled binary can run any test program. The harness drives
// clk/rst_n, dumps a VCD trace, and watches the tohost MMIO write: 0 means
// the program passed, nonzero is a failing-case code. Both become this
// process's exit status, and UART bytes are echoed to stdout.
#include <cstdio>
#include <cstdlib>
#include <memory>
#include <string>

#include "Vsoc_top.h"
#include "verilated.h"
#include "verilated_vcd_c.h"

int main(int argc, char **argv) {
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

  std::string vcd_path = "build/wave.vcd";
  uint64_t max_cycles = 2000000;
  for (int i = 1; i < argc; i++) {
    std::string a = argv[i];
    if (a.rfind("+VCD=", 0) == 0) {
      vcd_path = a.substr(5);
    } else if (a.rfind("+MAXCYCLES=", 0) == 0) {
      max_cycles = std::strtoull(a.c_str() + 11, nullptr, 10);
    }
  }

  auto top = std::make_unique<Vsoc_top>();
  auto trace = std::make_unique<VerilatedVcdC>();
  top->trace(trace.get(), 99);
  trace->open(vcd_path.c_str());

  vluint64_t time_ns = 0;
  auto half_tick = [&]() {
    top->clk = !top->clk;
    top->eval();
    trace->dump(time_ns);
    time_ns += 5;
  };

  top->clk = 0;
  top->rst_n = 0;
  for (int i = 0; i < 4; i++) half_tick();
  top->rst_n = 1;

  bool finished = false;
  int exit_code = 1;
  uint64_t cycle = 0;

  while (!finished && cycle < max_cycles && !Verilated::gotFinish()) {
    half_tick(); // falling edge
    half_tick(); // rising edge: outputs from this cycle are now valid

    if (top->tohost_wr) {
      uint32_t status = top->tohost_data;
      if (status == 0) {
        std::printf("TEST PASSED\n");
        exit_code = 0;
      } else {
        std::printf("TEST FAILED (code=%u)\n", status);
        exit_code = (status & 0xff) ? (status & 0xff) : 1;
      }
      finished = true;
    }
    if (top->uart_wr) {
      std::putchar(static_cast<char>(top->uart_data));
      std::fflush(stdout);
    }

    cycle++;
  }

  if (!finished) {
    std::printf("TIMEOUT after %llu cycles\n",
                 static_cast<unsigned long long>(cycle));
    exit_code = 2;
  }

  top->final();
  trace->close();
  return exit_code;
}

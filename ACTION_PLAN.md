# Action Plan — 3-Stage RV32I RISC-V Core

## Goal

Build a synthesizable 3-stage pipelined RISC-V core that implements the full
**RV32I base integer instruction set** (the mandatory minimum per the
RISC-V Unprivileged ISA spec), plus a complete verification flow that:

1. Compiles real RISC-V assembly (`.S`) and C (`.c`) programs with the
   standard GNU toolchain (`riscv32-unknown-elf-gcc/as/ld/objcopy`).
2. Loads the resulting machine code into a Verilator simulation of the core.
3. Runs the program on the RTL, checks pass/fail via a `tohost` memory-mapped
   register (the same convention used by `riscv-tests`), and dumps a `.vcd`
   waveform for debugging in GTKWave.

## Scope decisions (what "minimum spec" means here)

- **ISA**: RV32I only (no M/A/F/D/C extensions). All 37 base instructions
  (arithmetic, logic, shifts, `LUI`/`AUIPC`, branches, `JAL`/`JALR`,
  loads/stores) are implemented per the spec's semantics, including correct
  sign-extension, `x0` hard-wired to zero, and byte/half/word memory access
  with proper alignment behavior.
- **No privileged spec / CSRs**: CSR instructions are not part of base
  RV32I — they belong to the separate **Zicsr** extension — so omitting
  them is still a legitimate "base ISA only" core, not a shortcut around a
  mandatory requirement. There is only machine-implicit user execution — no
  interrupts, no traps, no CSR file. `ECALL`/`EBREAK`/`FENCE` decode cleanly
  but are architectural no-ops. The tradeoff: the official
  `riscv-tests`/`riscv-arch-test` suites assume Zicsr + machine-mode CSRs
  (`mtvec`/`mepc`/`mcause`) for trap setup and pass/fail signalling, so they
  can't run here unmodified — this is exactly why the verification flow
  below uses a custom `tohost` MMIO convention instead, which needs no CSRs.
- **Harvard-style memory**: separate instruction and data memories, both
  simulation models loaded from the *same* program image at boot. This means
  self-modifying code is not supported, but every ordinary program (its
  `.text`, `.rodata`, `.data`, `.bss`, stack) behaves exactly as on a real
  unified address space.
- **Test signalling**: programs report completion by writing a status word to
  a fixed MMIO address (`tohost`, `0x1000_0000`) — 0 = pass, nonzero = fail
  code — mirroring `riscv-tests`. A second MMIO byte (`0x1000_0004`) is a
  write-only UART TX for simple `putchar`-style debug output.

## Microarchitecture

3 pipeline stages, chosen to keep the design genuinely minimal while still
needing real hazard-handling logic (the interesting part of a pipelined
core):

| Stage | Name | Work done |
|---|---|---|
| 1 | **IF** | PC register/mux, instruction memory fetch |
| 2 | **ID/EX** | Decode, register read, immediate generation, ALU execute, branch/jump resolution + target computation |
| 3 | **MEM/WB** | Data memory access (load/store), writeback mux, register file write |

Hazards:
- **RAW on ALU results**: 1-cycle apart (producer in stage 3 while consumer
  is in stage 2) → resolved with a combinational forwarding mux from the
  MEM/WB stage output back into stage 2's ALU operand muxes.
- **Load-use hazard**: because data memory is read combinationally within the
  MEM/WB stage, the loaded word is forwarded the *same* cycle the load is in
  stage 3 — no stall needed, at the cost of the memory being non-registered
  (a documented simplification, same trick used by several small
  educational cores).
- **Control hazard**: branches/jumps resolve in stage 2. One instruction has
  already been fetched behind them; on a taken branch/jump it is squashed
  (turned into a bubble) — a fixed 1-cycle penalty, no prediction.

## Work breakdown

1. **Docs** — `README.md` (with block diagram) and this action plan.
2. **RTL building blocks** — `riscv_pkg.sv` (opcodes/constants),
   `regfile.sv`, `alu.sv`, `imm_gen.sv`, `decoder.sv`.
3. **Pipeline stages** — `if_stage.sv`, `idex_stage.sv`, `memwb_stage.sv`,
   `hazard_unit.sv` (forwarding + flush), wired together in `riscv_core.sv`.
4. **SoC shell** — `imem.sv`, `dmem.sv` (behavioral memories, `$readmemh`
   loaded), `soc_top.sv` (core + memories + tohost/UART MMIO decode).
5. **Verilator testbench** — `sim/sim_main.cpp`: instantiates `Vsoc_top`,
   drives clock/reset, opens VCD trace, watches the `tohost` port, prints
   PASS/FAIL, exits with a shell-usable status code.
6. **Bare-metal support code** — `sw/common/crt0.S` (reset entry, stack
   init, calls `main`, writes result to `tohost`), `sw/common/link.ld`
   (places `.text` at address 0, defines memory size/stack), `tohost.h`
   (pass/fail/putchar helpers for asm and C).
7. **Sample programs** — hand-written assembly tests exercising each
   instruction class, and a couple of small C programs (recursion, loops,
   arrays) compiled with `-march=rv32i -mabi=ilp32 -nostdlib -ffreestanding`.
8. **Build system** — a top-level `Makefile` plus `sim/Makefile` for the
   Verilator build, so `make test TEST=tests/c/fib.c` compiles, builds the
   sim (if needed), runs it, and drops `wave.vcd` + a pass/fail summary.
9. **Bring-up** — run every sample test through the real toolchain +
   Verilator, fix RTL/software bugs until everything passes, run
   `verilator --lint-only` clean.

## Verification strategy

- Directed assembly tests per instruction/hazard case (`tests/asm/*.S`):
  ALU ops, immediates, shifts, `LUI`/`AUIPC`, all branch conditions taken and
  not-taken, `JAL`/`JALR`, loads/stores of every width (with sign/zero
  extension and unaligned-within-word offsets), a back-to-back
  load-use dependency, and a back-to-back ALU-result dependency.
- C tests (`tests/c/*.c`) as end-to-end confidence: recursive Fibonacci,
  an array bubble sort, and a loop-heavy checksum — these exercise the
  compiler's real instruction mix (stack frames, `JALR` returns, byte/word
  memory ops) rather than hand-picked sequences.
- Every test is self-checking: it computes an expected value and writes
  pass (0) or a nonzero failing-case id to `tohost`; the C harness exits
  with that code so `make test` output is unambiguous pass/fail, and CI-like
  batch runs are just a shell loop over the test directory.

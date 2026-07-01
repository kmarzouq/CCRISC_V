#include "tohost.h"

// Exercises the pipeline's forwarding paths with no software NOPs: a
// back-to-back ALU-result dependency and a back-to-back load-use
// dependency (see hazard_unit.sv / memwb_stage.sv).
.section .data
.align 4
val:
    .word 100

.section .text
.globl main
main:
    li   t0, 5
    addi t1, t0, 1          // depends on t0 from the immediately preceding insn
    addi t2, t1, 1          // depends on t1 from the immediately preceding insn
    li   t3, 7
    bne  t2, t3, fail

    la   t0, val
    lw   t1, 0(t0)          // load 100
    addi t2, t1, 1          // load-use hazard: must be forwarded, no stall inserted
    li   t3, 101
    bne  t2, t3, fail

    TEST_PASS
fail:
    TEST_FAIL 1

#include "tohost.h"

// Exercises SB/SH/SW and LB/LH/LW/LBU/LHU, including sign/zero extension
// and a nonzero byte offset within a word.
.section .data
.align 4
buf:
    .word 0, 0, 0, 0

.section .text
.globl main
main:
    la   t0, buf

    li   t1, -1
    sb   t1, 0(t0)
    lb   t2, 0(t0)            // sign-extended -> -1
    li   t3, -1
    bne  t2, t3, fail

    lbu  t2, 0(t0)            // zero-extended -> 0xFF
    li   t3, 0xFF
    bne  t2, t3, fail

    li   t1, -2
    sh   t1, 4(t0)
    lh   t2, 4(t0)            // sign-extended -> -2
    li   t3, -2
    bne  t2, t3, fail

    lhu  t2, 4(t0)            // zero-extended -> 0xFFFE
    li   t3, 0xFFFE
    bne  t2, t3, fail

    li   t1, 0x11223344
    sw   t1, 8(t0)
    lw   t2, 8(t0)
    bne  t2, t1, fail

    li   t1, 0x7A             // byte at a nonzero offset within a word
    sb   t1, 13(t0)
    lbu  t2, 13(t0)
    bne  t2, t1, fail

    TEST_PASS
fail:
    TEST_FAIL 1

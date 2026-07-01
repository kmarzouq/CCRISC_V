#include "tohost.h"

// Exercises the R-type ALU operations (OP opcode).
.section .text
.globl main
main:
    li      t0, 5
    li      t1, 3

    add     t2, t0, t1
    li      t3, 8
    bne     t2, t3, fail

    sub     t2, t0, t1
    li      t3, 2
    bne     t2, t3, fail

    li      t0, 1
    li      t1, 4
    sll     t2, t0, t1          // 1 << 4 = 16
    li      t3, 16
    bne     t2, t3, fail

    li      t0, 0x80000000
    li      t1, 4
    srl     t2, t0, t1          // logical shift
    li      t3, 0x08000000
    bne     t2, t3, fail

    sra     t2, t0, t1          // arithmetic shift, sign extends
    li      t3, 0xF8000000
    bne     t2, t3, fail

    li      t0, -5
    li      t1, 3
    slt     t2, t0, t1          // -5 < 3 signed -> 1
    li      t3, 1
    bne     t2, t3, fail

    sltu    t2, t0, t1          // (uint)-5 < 3 -> 0
    bne     t2, x0, fail

    li      t0, 0xF0
    li      t1, 0x0F
    or      t2, t0, t1
    li      t3, 0xFF
    bne     t2, t3, fail

    li      t0, 0xFF
    li      t1, 0x0F
    and     t2, t0, t1
    li      t3, 0x0F
    bne     t2, t3, fail

    xor     t2, t0, t1
    li      t3, 0xF0
    bne     t2, t3, fail

    TEST_PASS
fail:
    TEST_FAIL 1

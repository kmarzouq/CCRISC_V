#include "tohost.h"

// Exercises the OP-IMM opcode (ADDI/SLTI/.../SRAI), LUI, and AUIPC.
.section .text
.globl main
main:
    li      t0, 10

    addi    t1, t0, 5
    li      t2, 15
    bne     t1, t2, fail

    slti    t1, t0, 20
    li      t2, 1
    bne     t1, t2, fail

    sltiu   t1, t0, 5
    bne     t1, x0, fail

    xori    t1, t0, 0xFF
    li      t2, 0xF5
    bne     t1, t2, fail

    ori     t1, t0, 0x0F
    li      t2, 0x0F
    bne     t1, t2, fail

    andi    t1, t0, 0x0F
    li      t2, 0x0A
    bne     t1, t2, fail

    slli    t1, t0, 2
    li      t2, 40
    bne     t1, t2, fail

    li      t0, 0x80000000
    srli    t1, t0, 4
    li      t2, 0x08000000
    bne     t1, t2, fail

    srai    t1, t0, 4
    li      t2, 0xF8000000
    bne     t1, t2, fail

    lui     t1, 0x12345
    li      t2, 0x12345000
    bne     t1, t2, fail

    // Two back-to-back AUIPCs must differ by exactly 4, regardless of
    // where this program is linked/loaded.
    auipc   t1, 0
    auipc   t2, 0
    sub     t3, t2, t1
    li      t4, 4
    bne     t3, t4, fail

    TEST_PASS
fail:
    TEST_FAIL 1

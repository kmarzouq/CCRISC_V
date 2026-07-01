#include "tohost.h"

// Exercises every BRANCH condition, both taken and not-taken.
.section .text
.globl main
main:
    li   t0, 5
    li   t1, 5
    beq  t0, t1, l1
    j    fail
l1:
    li   t0, 5
    li   t1, 6
    bne  t0, t1, l2
    j    fail
l2:
    li   t0, -1
    li   t1, 1
    blt  t0, t1, l3          // -1 < 1 signed -> taken
    j    fail
l3:
    li   t0, 1
    li   t1, -1
    bge  t0, t1, l4          // 1 >= -1 signed -> taken
    j    fail
l4:
    li   t0, 1
    li   t1, -1
    bltu t0, t1, l5          // 1 < 0xFFFFFFFF unsigned -> taken
    j    fail
l5:
    li   t0, -1
    li   t1, 1
    bgeu t0, t1, l6          // 0xFFFFFFFF >= 1 unsigned -> taken
    j    fail
l6:
    // not-taken cases must NOT branch
    li   t0, 1
    li   t1, 2
    beq  t0, t1, fail
    bge  t0, t1, fail        // 1 >= 2 signed -> false
    bgeu t0, t1, fail        // 1 >= 2 unsigned -> false

    TEST_PASS
fail:
    TEST_FAIL 1

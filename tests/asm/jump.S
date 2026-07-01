#include "tohost.h"

// Exercises JAL (call) and JALR (return via ra).
.section .text
.globl main
main:
    jal   ra, sub1
    li    t1, 42
    bne   t0, t1, fail
    TEST_PASS

sub1:
    li    t0, 42
    jalr  x0, 0(ra)          // ret

fail:
    TEST_FAIL 1

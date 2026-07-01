#include "tohost.h"

/* Reset entry point for every test program (asm or C). Sets up the stack,
 * zeroes .bss, calls main(), and reports main()'s return value to tohost:
 * 0 = PASS, nonzero = FAIL code. Assembly-only tests define their own
 * `main` label (using TEST_PASS/TEST_FAIL from tohost.h) instead of a C
 * main() -- either way crt0 doesn't care. */

.section .text.init
.globl _start
_start:
    la      sp, _stack_top

    la      t0, __bss_start
    la      t1, __bss_end
bss_clear_loop:
    bgeu    t0, t1, bss_clear_done
    sw      zero, 0(t0)
    addi    t0, t0, 4
    j       bss_clear_loop
bss_clear_done:

    call    main

    li      t0, TOHOST_ADDR
    beqz    a0, report_pass
    sw      a0, 0(t0)
    j       spin
report_pass:
    sw      zero, 0(t0)
spin:
    j       spin

.size _start, . - _start

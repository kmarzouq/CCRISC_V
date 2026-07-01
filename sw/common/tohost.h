/* Shared MMIO convention for the SoC test harness (see README, soc_top.sv).
 * Usable from both C (`#include "tohost.h"`) and assembly (`.S` files,
 * preprocessed by cpp -- __ASSEMBLER__ is defined automatically). */
#ifndef TOHOST_H
#define TOHOST_H

#define TOHOST_ADDR 0x10000000
#define UART_ADDR   0x10000004

#ifdef __ASSEMBLER__

/* Write 0 to tohost (PASS) and spin. */
.macro TEST_PASS
    li   t0, TOHOST_ADDR
    sw   zero, 0(t0)
1:  j    1b
.endm

/* Write a nonzero failing-case id to tohost (FAIL) and spin. */
.macro TEST_FAIL code
    li   t0, TOHOST_ADDR
    li   t1, \code
    sw   t1, 0(t0)
2:  j    2b
.endm

#else /* C */

static inline void tohost_pass(void) {
    volatile unsigned int *p = (volatile unsigned int *)TOHOST_ADDR;
    *p = 0u;
    for (;;) { }
}

static inline void tohost_fail(unsigned int code) {
    volatile unsigned int *p = (volatile unsigned int *)TOHOST_ADDR;
    *p = code ? code : 1u;
    for (;;) { }
}

static inline void uart_putc(char c) {
    volatile unsigned char *p = (volatile unsigned char *)UART_ADDR;
    *p = (unsigned char)c;
}

static inline void uart_puts(const char *s) {
    while (*s) uart_putc(*s++);
}

#endif /* __ASSEMBLER__ */

#endif /* TOHOST_H */

/* Places .text at address 0 (the core's reset PC) and reserves a small
 * stack at the top of the same 64 KiB RAM image used by imem/dmem. */
OUTPUT_ARCH(riscv)
ENTRY(_start)

MEMORY
{
  RAM (rwx) : ORIGIN = 0x00000000, LENGTH = 64K
}

SECTIONS
{
  . = 0x00000000;

  .text.init : { *(.text.init) } > RAM
  .text      : { *(.text*) }      > RAM
  .rodata    : { *(.rodata*) }    > RAM
  .data      : { *(.data*) }      > RAM

  .bss (NOLOAD) : {
    __bss_start = .;
    *(.bss*) *(COMMON)
    __bss_end = .;
  } > RAM

  . = ALIGN(16);
  . = . + 4K;         /* stack space */
  _stack_top = .;

  /DISCARD/ : { *(.comment) *(.riscv.attributes) *(.eh_frame*) }
}

// spede.h, CpE/CSc 159
// SPEDE library headers, ~spede2/Target-i386/Common/include/spede

#ifndef _SPEDE_H_
#define _SPEDE_H_

#include <spede/flames.h>  // IO_DELAY(), breakpoint(), cons_putchar(), cons_getchar(), cons_kbhit()
#include <spede/sys/cdefs.h> // __DEGIN_DECLS, __END_DECLS, etc.
#include <spede/stdio.h>  // printf(), sprintf(), vprintf(), sscanf(), etc.
#include <spede/assert.h> //assert()

#include <spede/machine/io.h>  //inportb(), outportb(), inportw(), etc.
#include <spede/machine/proc_reg.h>  // get_idt_base(), get_cs(), set_cr3(), etc.
#include <spede/machine/seg.h>  // struct i386_gate, fill_gate(), etc.
#include <spede/machine/asmacros.h>  // ASM(), CNAME(), ENTRY(), etc.

#include <spede/machine/rs232.h>   // for terminals, IRQ3 constants

#endif

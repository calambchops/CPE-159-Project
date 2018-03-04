// entry.S, entries to kernel services, build process trapframe

#include "kernel_constants.h"
#include <spede/machine/asmacros.h>
.comm kernel_stack, 8192, 1  // declare kernel stack space 8192 X 1 byte
.text

// loads the trapframe of the selected process in order to run it
ENTRY(ProcLoader)
  movl 4(%esp), %ebx
  movl %ebx, %esp
  popa
  addl $4, %esp //skip intr_num 4 bytes
  iret


ENTRY(TimerEntry)
  pushl $TIMER
  jmp EnterKernel
  
ENTRY(SyscallEntry)
  pushl $SYSCALL
  jmp EnterKernel
  
  
// build proc frame, and go into kernel
EnterKernel:
  pusha
  movl %esp, %ecx
  movw $0x10, %ax
  mov %ax, %ds
  mov %ax, %es
  leal kernel_stack + 8192, %esp
  pushl %ecx
  cld
  call CNAME(Kernel)

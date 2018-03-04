// entry.h of entry.S
// prototypes those coded in entry.S

#ifndef _ENTRY_H_
#define _ENTRY_H_

#ifndef ASSEMBLER

__BEGIN_DECLS

#include "kernel_types.h"   // trapframe_t

void TimerEntry(void);      // coded in entry.S, assembler won't like syntax
void SyscallEntry(void); 
void ProcLoader(trapframe_t *);

__END_DECLS

#endif  // ifndef ASSEMBLER

#endif  // ifndef _ENTRY_H_

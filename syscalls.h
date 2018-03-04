// syscalls.h, 159

#ifndef _SYSCALLS_H_
#define _SYSCALLS_H_

int sys_getpid(void);
void sys_write(int, char *, int);
void sys_sleep(int);
void sys_semwait(int);
void sys_sempost(int);

#endif

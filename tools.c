//tools.c, 159

#include "spede.h"
#include "kernel_types.h"
#include "kernel_data.h"

// clear DRAM by setting each byte to zero
void MyBzero(char *p, int size) {
  int i;
  for(i=0; i<size; i++) {
    	p = (char)0;
	p++;
  }
}

// dequeue, return 1st element in array, and move all forward
// if queue empty, return -1
int DeQ(pid_q_t *p) {
  int i, element = -1;
  if(p->size == 0) {
    return element;
  }
    element = p->q[0];
    p->size--;
  for(i=0; i<p->size; i++) {
    p->q[i] = p->q[i+1];
  }
  return element;
}

// enqueue element to next availabe position in array, 'size' is array index
void EnQ(int element, pid_q_t *p) {
  if(p->size == Q_SIZE) {
    cons_printf("Kernel Panic: queue is full, cannot EnQ!\n");
    return;
  }
  p->q[p->size] = element;
  p->size++;
}

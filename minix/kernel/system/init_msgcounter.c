#include "kernel/system.h"
 #include <minix/endpoint.h>

 /*===========================================================================*
  *                                init_msgcounter                                  *
  *===========================================================================*/
 static int msgcounter_value = 0;

 int init_msgcounter(struct proc *caller_ptr, message *m_ptr)
 {
     //printf("init_msgcounter executed from kernel side");
     mscounter_value = 0;
     return (OK);
 }

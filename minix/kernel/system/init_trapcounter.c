#include "kernel/system.h"
#include <minix/endpoint.h>

 /*===========================================================================*
  *                                init_trapcounter                                  *
  *===========================================================================*/

 static int trapcounter_value = 0;

 int init_trapcounter(struct proc *caller_ptr, message *m_ptr)
 {
	 printf("init_trapcounter executed from kernel side");
     trapcounter_value = 0;
     return (OK);
 }

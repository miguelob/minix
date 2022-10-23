#include "kernel/system.h"
#include <minix/endpoint.h>

 /*===========================================================================*
  *                                msgcounter                                  *
  *===========================================================================*/

 int msgcounter(struct proc *caller_ptr, message *m_ptr)
 {
	 //printf("msgcounter executed from kernel side");
     return (OK);
 }

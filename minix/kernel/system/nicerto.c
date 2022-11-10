#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
*                                nicerto                                  *
*===========================================================================*/

int nicerto(struct proc *caller_ptr, message *m_ptr)
{
	 printf("nicerto executed from kernel side\n");
	 return (OK);
}

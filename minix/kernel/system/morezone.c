#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
*                                morezone                                  *
*===========================================================================*/

int morezone(struct proc *caller_ptr, message *m_ptr)
{
	 printf("morezone executed from kernel side\n");
	 return (OK);
}

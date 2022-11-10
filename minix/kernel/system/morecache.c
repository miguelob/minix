#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
*                                morecache                                  *
*===========================================================================*/

int morecache(struct proc *caller_ptr, message *m_ptr)
{
	 printf("morecache executed from kernel side\n");
	 return (OK);
}

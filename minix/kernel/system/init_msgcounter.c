#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
*                                init_msgcounter                                  *
*===========================================================================*/
static int msgcounter_value = 0;

int init_msgcounter(struct proc *caller_ptr, message *m_ptr)
{
	 printf("init_msgcounter executed from kernel side\n");
	 msgcounter_value = 0;
	 return (OK);
}

int msgcounter(struct proc *caller_ptr, message *m_ptr)
{
	printf("Kernel: Hello World!\n");
	msgcounter_value += 1;
	m_ptr->m_pm_lsys_msgcounter.num = msgcounter_value;
	printf("Kernel: Inside msgcounter. msgcounter called %d times\n", msgcounter_value);

	return OK;
}

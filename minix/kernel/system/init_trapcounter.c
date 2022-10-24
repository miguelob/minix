#include "kernel/system.h"
#include <minix/endpoint.h>

 /*===========================================================================*
  *                                init_trapcounter                                  *
  *===========================================================================*/

static int trapcounter_value = 0;

int init_trapcounter(struct proc *caller_ptr, message *m_ptr)
{
	 printf("init_trapcounter executed from kernel side\n");
	 trapcounter_value = 0;
	 return (OK);
}
int trapcounter(struct proc *caller_ptr, message *m_ptr)
{
	printf("Kernel: Hello World!\n");
	trapcounter_value += 1;
	m_ptr->m_pm_lsys_trapcounter.num = trapcounter_value;
	printf("Kernel: Inside trapcounter. trapcounter called %d times\n", trapcounter_value);

	return OK;
}


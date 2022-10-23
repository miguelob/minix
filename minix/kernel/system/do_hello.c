#include "kernel/system.h"
#include <minix/endpoint.h>

#if USE_HELLO

static int times_called = 0;

int do_hello(struct proc * caller, message * m_ptr){
	printf("Kernel: Hello World!\n");
	times_called += 1;
	m_ptr->m_pm_lsys_hello.num = times_called;
	printf("Kernel: Inside do_hello. do_hello called %d times\n", times_called);

	return OK;

}

#endif /* USE_HELLO */

#include "syslib.h"

int sys_hello(endpoint_t proc_ep, int *hello_count){
	message m;

	int ret = _kernel_call(SYS_HELLO, &m);

	if(ret != OK){
		printf("libsys: Error in _kernel_call(SYS_HELLO). Error %d", ret);
		return ret;
	}

	*hello_count = m.m_pm_lsys_hello.num;
	return(OK);
}

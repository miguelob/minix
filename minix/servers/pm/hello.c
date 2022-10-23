#include "pm.h"
#include <minix/callnr.h>
#include <minix/com.h>
#include "mproc.h"


int do_hello(){
	register struct mproc *sending_proc = mp;
	int num_times = 0;

	int ret = sys_hello(sending_proc->mp_endpoint, &num_times);
	if(ret != OK){
		printf("PM: do_hello failed [%d].\n", ret);
		return ret;
	}

	return num_times;
}

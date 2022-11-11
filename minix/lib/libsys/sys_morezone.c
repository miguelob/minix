#include "syslib.h"

 int sys_morezone(endpoint_t proc_ep, int *morezone)
 {
         message m;

         int ret = _kernel_call(SYS_MOREZONE, &m);
         if(ret != OK){
         		printf("libsys: Error in _kernel_call(SYS_MOREZONE). Error %d", ret);
         		return ret;
         	}

         	*morezone = m.m_pm_lsys_morezone.num;
         	return(OK);
 }

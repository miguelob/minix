#include "syslib.h"

 int sys_init_msgcounter(endpoint_t proc_ep, int *msgcounter)
 {
         message m;

         int ret = _kernel_call(SYS_INIT_MSGCOUNTER, &m);
         if(ret != OK){
         		printf("libsys: Error in _kernel_call(SYS_INIT_MSGCOUNTER). Error %d", ret);
         		return ret;
         	}

         	*msgcounter = m.m_pm_lsys_msgcounter.num;
         	return(OK);
 }

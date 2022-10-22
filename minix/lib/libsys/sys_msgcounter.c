#include "syslib.h"

 int sys_msgcounter(endpoint_t proc_ep, *int msgcount)
 {
         message m;

         ret = _kernel_call(SYS_INIT_MSGCOUNTER, &m);
         if(ret != OK){
         		printf("libsys: Error in _kernel_call(SYS_INIT_MSGCOUNTER). Error %d", ret);
         		return ret;
         	}

         	*msgcount = m.m_pm_lsys_msgcounter.num;
         	return(OK);
 }

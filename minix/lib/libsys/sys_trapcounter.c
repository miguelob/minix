#include "syslib.h"

 int sys_trapcounter(endpoint_t proc_ep, int *trapcount)
 {
         message m;

         ret = _kernel_call(SYS_TRAPCOUNTER, &m);
         if(ret != OK){
         		printf("libsys: Error in _kernel_call(SYS_TRAPCOUNTER). Error %d", ret);
         		return ret;
         	}

         	*trapcount = m.m_pm_trapcounter.num;
         	return(OK);
 }

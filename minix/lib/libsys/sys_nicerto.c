#include "syslib.h"

 int sys_nicerto(endpoint_t proc_ep, int *nicerto)
 {
         message m;

         int ret = _kernel_call(SYS_NICERTO, &m);
         if(ret != OK){
         		printf("libsys: Error in _kernel_call(SYS_NICERTO). Error %d", ret);
         		return ret;
         	}

         	*nicerto = m.m_pm_lsys_nicerto.num;
         	return(OK);
 }

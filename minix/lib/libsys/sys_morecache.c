#include "syslib.h"

 int sys_morecache(endpoint_t proc_ep, int *morecache)
 {
         message m;

         int ret = _kernel_call(SYS_MORECACHE, &m);
         if(ret != OK){
         		printf("libsys: Error in _kernel_call(SYS_MORECACHE). Error %d", ret);
         		return ret;
         	}

         	*morecache = m.m_pm_lsys_morecache.num;
         	return(OK);
 }

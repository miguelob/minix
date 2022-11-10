#include "pm.h"
 #include <minix/callnr.h>
 #include <minix/com.h>
 #include "mproc.h"

 /*===========================================================================*
  *				morecache				     *
  *===========================================================================*/
 int do_morecache(void)
 {
 	register struct mproc *sending_proc = mp;
 	int num_times = 0;

     int ret = sys_morecache(sending_proc->mp_endpoint, &num_times);

     if(ret != OK){
         printf("An error has occured while executing do_morecache");
         return ret;
     }


 	return num_times;
 }

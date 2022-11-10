#include "pm.h"
 #include <minix/callnr.h>
 #include <minix/com.h>
 #include "mproc.h"

 /*===========================================================================*
  *				nicerto				     *
  *===========================================================================*/
 int do_nicerto(void)
 {
 	register struct mproc *sending_proc = mp;
 	int num_times = 0;

     int ret = sys_nicerto(sending_proc->mp_endpoint, &num_times);

     if(ret != OK){
         printf("An error has occured while executing do_nicerto");
         return ret;
     }


 	return num_times;
 }

#include "pm.h"
 #include <minix/callnr.h>
 #include <minix/com.h>
 #include "mproc.h"

 /*===========================================================================*
  *				morezone				     *
  *===========================================================================*/
 int do_morezone(void)
 {
 	register struct mproc *sending_proc = mp;
 	int num_times = 0;

     int ret = sys_morezone(sending_proc->mp_endpoint, &num_times);

     if(ret != OK){
         printf("An error has occured while executing do_morezone");
         return ret;
     }


 	return num_times;
 }

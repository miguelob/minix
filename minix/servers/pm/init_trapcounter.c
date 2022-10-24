#include "pm.h"
 #include <minix/callnr.h>
 #include <minix/com.h>
 #include "mproc.h"

 /*===========================================================================*
  *				do_init_trapcounter				     *
  *===========================================================================*/
 int do_init_trapcounter(void)
 {
 	register struct mproc *sending_proc = mp;
 	int num_times = 0;

     int ret = sys_init_trapcounter(sending_proc->mp_endpoint, &num_times);

     if(ret != OK){
         printf("An error has occured while executing do_init_trapcounter");
         return ret;
     }


 	return num_times;
 }

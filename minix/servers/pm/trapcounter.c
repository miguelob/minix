#include "pm.h"
#include <minix/callnr.h>
#include <minix/com.h>
#include "mproc.h"

/*===========================================================================*
 *				do_trapcounter				     *
 *===========================================================================*/
int do_trapcounter(void)
{
	register struct mproc *sending_proc = mp;

    int ret = sys_trapcounter(sending_proc->mp_endpoint);

    if(ret != OK){
        printf("An error has occured while executing do_trapcounter");
        return ret;
    }
	

	return OK;
}
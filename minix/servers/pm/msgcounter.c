#include "pm.h"
#include <minix/callnr.h>
#include <minix/com.h>
#include "mproc.h"

/*===========================================================================*
 *				do_msgcounter				     *
 *===========================================================================*/
int do_msgcounter(void)
{
	register struct mproc *sending_proc = mp;

    int ret = sys_msgcounter(sending_proc->mp_endpoint);

    if(ret != OK){
        printf("An error has occured while executing do_msgcounter");
        return ret;
    }
	

	return OK;
}
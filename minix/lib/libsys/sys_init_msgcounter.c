#include "syslib.h"

int sys_init_msgcounter(endpoint_t proc_ep)
{
        message m;

        return(_kernel_call(SYS_MSGCOUNTER, &m));
}
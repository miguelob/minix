#include "syslib.h"

int sys_trapcounter(endpoint_t proc_ep)
{
        message m;

        return(_kernel_call(SYS_TRAPCOUNTER, &m));
}
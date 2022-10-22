#include "syslib.h"

int init_trapcounter(endpoint_t proc_ep)
{
        message m;

        return(_kernel_call(SYS_INIT_TRAPCOUNTER, &m));
}
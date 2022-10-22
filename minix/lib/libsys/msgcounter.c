#include "syslib.h"

int msgcounter(endpoint_t proc_ep)
{
        message m;

        return(_kernel_call(SYS_INIT_MSGCOUNTER, &m));
}
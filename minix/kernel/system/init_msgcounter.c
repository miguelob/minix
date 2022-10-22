#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
 *                                init_msgcounter                                  *
 *===========================================================================*/
static int msgcounter_value = 0;

int init_msgcounter(struct proc *caller_ptr, message *m_ptr)
{
    msgcounter_value = 0;
    return (OK);
}
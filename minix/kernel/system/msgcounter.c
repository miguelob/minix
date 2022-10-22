#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
 *                                msgcounter                                  *
 *===========================================================================*/

int msgcounter(struct proc *caller_ptr, message *m_ptr)
{
    printf("Messages counter: %d", msgcounter_value);
    return (OK);
}
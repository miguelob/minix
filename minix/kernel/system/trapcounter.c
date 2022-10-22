#include "kernel/system.h"
#include <minix/endpoint.h>

/*===========================================================================*
 *                                trapcounter                                  *
 *===========================================================================*/
int trapcounter(struct proc *caller_ptr, message *m_ptr)
{
    printf("Traps counter: %d", trapcounter_value);
    return (OK);
}
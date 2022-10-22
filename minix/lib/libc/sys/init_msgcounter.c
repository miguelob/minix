#include <sys/cdefs.h>
#include <lib.h>
#include "namespace.h"

#include <string.h>
#include <signal.h>

int init_msgcounter(void)
{
  message m;

  memset(&m, 0, sizeof(m));

  return(_syscall(PM_PROC_NR, PM_INIT_MSGCOUNTER, &m));
}

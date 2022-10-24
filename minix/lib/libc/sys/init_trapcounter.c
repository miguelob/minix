#include <sys/cdefs.h>
#include <lib.h>
#include "namespace.h"

#include <string.h>
#include <signal.h>

#ifdef __weak_alias
__weak_alias(kill, _kill)
#endif

int init_trapcounter()
{
	message m;

	memset(&m, 0, sizeof(m));

	return(_syscall(PM_PROC_NR, PM_INIT_TRAPCOUNTER, &m));
}

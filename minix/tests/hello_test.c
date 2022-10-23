#include <sys/hello.h>
#include "common.h"


int main(int argc, char *argv[]){

	int num_hellos = hello();
	printf("hello() syscall has been called %d times!\n", num_hellos);
	return 0;

}

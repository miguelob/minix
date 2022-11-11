#include <sys/morezone.h>
#include <sys/morecache.h>
#include <sys/nicerto.h>
#include <stdio.h>

#include "common.h"

int main(int argc, char *argv[]){

	nicerto();
	morecache();
	morezone();

	 return 0;
}

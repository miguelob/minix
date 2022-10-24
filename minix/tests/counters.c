#include <sys/init_trapcounter.h>
#include <sys/trapcounter.h>
#include <sys/init_msgcounter.h>
#include <sys/msgcounter.h>
#include <stdio.h>

#include "common.h"

int main(int argc, char *argv[]){

	//WRITE

	/*init_trapcounter();
	init_msgcounter();

	int X = 5 * 1024 - 1;
	FILE *f;

	f = fopen("write_test.txt", "w");
	fseek(f, X, SEEK_SET);
	fputc('\0', f);
	fclose(f);

	 int traps_write = trapcounter() - 1;
	 int msgs_write = msgcounter() - 1;

	 printf("Number of traps for write: %d\n", traps_write);
	 printf("Number of msgs for write: %d\n", msgs_write);



	 //Read

	 init_trapcounter();
	 init_msgcounter();

	 char buff[255];

	 f = fopen("read_test.txt", "r");

	 fscanf(f, "%s", buff);
	 fclose(f);

	 int traps_read = trapcounter() - 1;
	 int msgs_read = msgcounter() - 1;

	 printf("Number of traps for read: %d\n", traps_read);
	 printf("Number of msgs for read: %d\n", msgs_read);*/
	init_trapcounter();
	init_msgcounter();

	printf("Both counters reseted.\n");
	printf("Number of msgs counted: %d.", msgcounter());
	printf("Number of traps counted: %d.", trapcounter());
	printf("Number of msgs counted: %d.", msgcounter());
	printf("Number of traps counted: %d.", trapcounter());

	init_trapcounter();
	init_msgcounter();

	printf("Both counters reseted.\n");
	printf("Number of msgs counted: %d.", msgcounter());
	printf("Number of traps counted: %d.", trapcounter());
	printf("Number of msgs counted: %d.", msgcounter());
	printf("Number of traps counted: %d.", trapcounter());

	 return 0;
}

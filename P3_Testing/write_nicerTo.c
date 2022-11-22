#include <sys/nicerTo.h>
#include <stdio.h>

#include "common.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int X = 5 * 1024 - 1;
    FILE *f;

    f = fopen(argv[1], "w");
    fseek(f, X, SEEK_SET);
    nicerTo(fputc('\0', f));
    int c = fclose(f);
    return 0;
}

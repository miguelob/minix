
#include <sys/do_more_zone.h>
#include <stdio.h>

#include "common.h"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    do_more_zone(4); // 4 blocks per zone
    int X = 5 * 1024 - 1;
    FILE *f;

    f = fopen(argv[1], "w");
    fseek(f, X, SEEK_SET);
    nicerTo(fputc('\0', f));
    int c = fclose(f);
    return 0;
}

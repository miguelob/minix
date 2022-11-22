#include <sys/time.h>
#include <stdio.h>

int main(void){
    struct timeval te; 
    gettimeofday(&te, NULL); // get current time
    long long milliseconds = te.tv_sec*1000LL + te.tv_usec/1000; // calculate milliseconds
    printf("%lld", milliseconds);
    return 0;
}

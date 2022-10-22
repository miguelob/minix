#include <sys/init_trapcounter.h>
#include <sys/trapcounter.h>
#include <sys/init_msgcounter.h>
#include <sys/msgcounter.h>

int main(int argc, char *argv[]){
    init_trapcounter();
    trapcounter();
    init_msgcounter();
    msgcounter();
}
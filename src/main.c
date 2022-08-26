#include <stdio.h>
#include "include/ken.h"

int main(int argc, char* argv[]){
    if(argc < 2)
    {
        printf("Specify a input file\n");
        return 1;
    }

    ken_compile_file(argv[1]);

    return 0;
}
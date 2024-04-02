#include <stdio.h>

int main(int argc, char *argv[]){

    if(argc<2)
    {
        printf("Usage: 127.0.0.1 443");

    } else {

           printf("Varrendo host: %s na Porta %s", argv[1],argv[2]);
    } 

    return 0;
} 
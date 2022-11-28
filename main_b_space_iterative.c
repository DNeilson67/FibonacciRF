#include <stdio.h>
#include "mylib/mylib.h"

int main(void){
    int n = 100000;

    printf("press Ctrl + C to interrupt the process\n");
    printf("parameter: %d\n", n);

    while(1){
        fibonacciIterative(n);
    }
    
    return 0;
}
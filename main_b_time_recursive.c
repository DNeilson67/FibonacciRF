#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){    
    clock_t t;
    t = clock();
    fibonacciRecursive(40);
    t = clock() - t;
    double time_takenR = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time taken FibonacciRecursive:%f \n", time_takenR);
    }
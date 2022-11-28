#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){    
    clock_t t;
    t = clock();
    fibonacciIterative(40);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds
    printf("Time taken FibonacciIterative:%f \n", time_taken);
    }
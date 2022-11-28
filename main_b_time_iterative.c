#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){ 
    int n;
    printf("Input a number:");
    scanf("%d",&n); 
    clock_t t;
    t = clock();
    fibonacciIterative(n);
    t = clock() - t;
    double time_taken = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken Fibonacci Iterative of %d :%f seconds \n ", n, time_taken);
    }
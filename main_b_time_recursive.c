#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){    
    int n;
    printf("Input a number:");
    scanf("%d",&n); 
    clock_t t;
    t = clock();
    fibonacciRecursive(n);
    t = clock() - t;
    double time_takenR = ((double)t)/CLOCKS_PER_SEC;
    printf("Time taken Fibonacci Recursive %d:%f seconds \n", n, time_takenR);
    }
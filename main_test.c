#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
    int n;
    printf("Please decide the integer for Fibonacci:");
    scanf("%d",&n);
    printf("F(%d) = %d\n",n,fibonacciIterative(n));
    printf("F(%d) = %d\n",n,fibonacciRecursive(n));

    return 0;
}


#include <stdio.h>
#include <time.h>
#include "mylib/mylib.h"

int main(void){
    int n;
    printf("Input a number:");
    scanf("%d",&n);
    printf("Fibonacci Iterative of %d = %d\n",n,fibonacciIterative(n));
    printf("Fibonacci Recursive of %d = %d\n",n,fibonacciRecursive(n));

    return 0;
}


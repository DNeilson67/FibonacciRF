int fibonacciIterative(int n){
    int first = 0;
    int second = 1;
    int results;

    if (n == 0){
        return first;
    }
    else if (n == 1){
        return second;
    } 
    else {
        for(int i=2; i <= n; i++){
            results = first + second;
            first = second;
            second = results;
        }
        return results;
    }
}

int fibonacciRecursive(int n)
{
   if (n == 0){
        return 0;
    }
    else if (n == 1){
        return 1;
    }
    else{
        return fibonacciRecursive(n-1) + fibonacciRecursive(n-2);
    }
}
 
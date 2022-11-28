# Fibonacci Iterative and Recursive

There are a few things that can be done in this repository, they are comparing Fibonacci iterative and recursive results, the time, and the CPU usage of both Fibonacci.
## Run

Before running the algorithm, make sure to do this first:

```c
make clear
```
After that, run this code. This code will create mylib.o automatically and create main.out
```c
make all
```
Lastly, running this code will ask you the numbers for the Fibonacci and instantly give you the results of both Fibonacci.
```c
./main.out
```

## Time complexity Benchmark
Running these codes will describe the amount of computer time it takes to run an algorithm.
Disclaimer: If you haven't run the code above before, the benchmark won't work. Thus, if you want to do the benchmark without running the code above. You need to run this first:
```c
make mylib.o
```

To see the time complexity of Fibonacci Iterative, you need to do this:
```c
make timei
./timei.out
```
Then the program asks you to put the number what you want.
```
Input a number: 10
```
Lastly, the program will display the results.
```
Time taken Fibonacci Iterative of 10 :0.000001 seconds
```
\
To see the time complexity of Fibonacci Recursive, you need to do this:
```c
make timer
./timer.out
```
Then the program asks you to put the number what you want.
```
Input a number: 10
```
Lastly, the program will display the results.
```
Time taken Fibonacci Recursive of 10 :0.000002 seconds
```

## Space Complexity Benchmark

This will show the total space taken by the algorithm with respect to the input size.

Disclaimer: If you haven't run the code above before, the benchmark won't work. Thus, if you want to do the benchmark without running the code above. You need to run this first:
```
make mylib.o
```
\
To check the space complexity of Fibonacci Iterative, run this code below:
```c
make spacei
./spacei.out
```
The program will display this.
```
press Ctrl + C to interrupt the process
parameter: 100000
```
Lastly, To check the CPU Usage, go to task manager and find VmmemWSL. 
!ss/iterative.png
\
To check the space complexity of the Fibonacci Iterative, run this code below:
```c
make spacer
./spacer.out
```
The program will display this.
```
press Ctrl + C to interrupt the process
parameter: 100000
```
Lastly, To check the CPU Usage, go to task manager and find VmmemWSL. 
!ss/recursive.png

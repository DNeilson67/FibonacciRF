all: mylib.o
	gcc -o main.out main_test.c mylib.o

mylib.o:
	gcc -o mylib.o -c mylib/mylib.c

timei:
	gcc -o timei.out main_b_time_iterative.c mylib.o

timer:
	gcc -o timer.out main_b_time_recursive.c mylib.o

spacei:
	gcc -o spacei.out main_b_space_iterative.c mylib.o

spacer:
	gcc -o spacer.out main_b_space_recursive.c mylib.o

clear:
	rm -rf *.out
	rm -rf *.o
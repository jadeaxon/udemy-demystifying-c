#include <stdio.h>

// 7. Write a C program to print first n numbers of Fibonacci series where n is the value given by the user. For
// example if user enters 6 then output should be 0…1…1….2….3…..5

int main(void) {
	unsigned int number = 0;
	printf("number: ");
	scanf("%u", &number);

	int fib = 0;
	int last = 1;
	int last_last = 0;
	printf("0 1 ");
	for (int i = 3; i <= number; i++) {
		fib = (last_last + last);
		printf("%d ", fib);
		last_last = last;
		last = fib;
	}



} // main()



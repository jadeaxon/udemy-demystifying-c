#include <stdio.h>

// 12. Write a C program to print sum of odd positive integers up to 75.

int main(void) {
	int sum = 0;
	for (int i = 1; i <= 75; i++) {
		(i % 2 == 1) ? sum += i : 0;
	} // next number
	printf("sum: %d\n", sum);

} // main()



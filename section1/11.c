#include <stdio.h>

// 11. Write a C program to interchange contents of two variables without using third variable.

int main(void) {
	int i = 1;
	int j = 2;
	
	// Swap values.
	// FAIL: (i = j) && (j = i);
	// FAIL: j = i = i = j;
	// FAIL: i = j = i;
	
	i = i + j; // i = 1 + 2
	j = i - j; // j = 3 - 2 (1, the original value of i)
	i = i - j; // i = 3 - 1 (2, the original value of j)

	printf("i: %d\n", i);
	printf("j: %d\n", j);

} // main()

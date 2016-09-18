#include <stdio.h>

// 10. Write a C program to interchange contents of two integer variables with the help of temporary variable.

int main(void) {
	int i = 1;
	int j = 2;
	
	// Swap values.
	int t = i;
	i = j;
	j = t;

	printf("i: %d\n", i);
	printf("j: %d\n", j);

} // main()

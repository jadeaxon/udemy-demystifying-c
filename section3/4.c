#include <stdio.h>

// 4. Any integer is input through the keyboard.  Write a C program to print whether number entered is positive number or negative number.

int main(void) {
	int n = 0;

	printf("n: ");
	scanf("%d", &n);

	if ( n > 0 ) {
		puts("positive");
	}
	else if (n < 0) {
		puts("negative");
	}
	else { // Zero.
		puts("zero");
	}

} // main()



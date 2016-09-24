
#include <stdio.h>

// 3. Any integer is input through the keyboard. Write a C program to print whether number entered is even number or odd number.

int main(void) {
	int n = 0;

	printf("n: ");
	scanf("%d", &n);

	if ( n % 2 == 0 ) {
		puts("Even");
	}
	else {
		puts("Odd");
	}

} // main()



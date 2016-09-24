#include <stdio.h>

// 8. Any integer is input through the keyboard. Write a C program to print whether number entered is even number or odd number. (Make use of ternary operator).

int main(void) {
	int n = 0;

	printf("n: ");
	scanf("%d", &n);

	( n % 2 == 0 ) ? puts("Even") : puts("Odd");

} // main()



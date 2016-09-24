#include <stdio.h>

// 9. Write a C program to calculate and print cube of a number entered by the user. Make a provision that
// use r can enter as many numbers as he/she wants.

int cube(int n) {
	return n * n * n;
}

int main(void) {
	int number = 0;
	while (1) {
		printf("number (^C to exit): ");
		scanf("%d", &number);

		printf("cube: %d\n", cube(number));
	}

} // main()



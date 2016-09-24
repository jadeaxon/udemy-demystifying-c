
#include <stdio.h>

// 4. Write a C program to print multiplication table for numbers 1 to 10

int main(void) {
	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			printf("%d\t", i * j);
		}
		printf("\n");
	}
} // main()



#include <stdio.h>

// 5. An integer is input through the keyboard. Write a C program using function isoddeven()
// to determine whether the integer is odd or even. Modify program to take as many values
// as user wants to enter.

// Returns 0 if even, nonzero if odd.
int isoddeven(int i) {
	return i % 2;
}

int main(void) {
	int value = 0;
	int first = 1;	
	while (1) {
		if (!first) {
			while ( getchar() != '\n' ); // Flush stdin.
		}
		printf("value: ");
		while (!scanf("%d", &value)) {
			while ( getchar() != '\n' ); // Flush stdin.
			printf("*numeric* value: ");
		}

		if (isoddeven(value)) {
			puts("Odd");
		}
		else { // Even.
			puts("Even");
		}
		first = 0; // Not first iteration.
	} // next value

} // main()



#include <stdio.h>

/*
8. Write a C program to print all Armstrong numbers between 0 and number entered by the user. For
example if user enters 500 then output would be all Armstrong numbers between 0 and 500. (If sum of
cubes of each digit of the number is equal to the number itself, then the number is an Armstrong
number) For example 153 = (1* 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3)
*/

int main(void) {
	unsigned int number = 0;
	printf("number: ");
	scanf("%u", &number);

	char buffer[20];
	sprintf(buffer, "%u", number); // Convert uint to string.
	puts(buffer);

	char* cp = buffer;
	int cube_total = 0;
	char c = '\0';	
	while (c = *cp++) {
		int digit = c - '0'; // Convert char digit to int.
		printf("c: %c\n", c);
		printf("digit: %d\n", digit);	
		int cube = digit * digit * digit;
		printf("cube: %d\n", cube);
		cube_total += cube;
	}

	if (number == cube_total) {
		puts("Armstrong number!");
	}
	else {
		puts("No.");
	}

} // main()



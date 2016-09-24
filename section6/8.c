#include <stdio.h>
#include <string.h>

// 8. Any integer is input from the keyboard. Write a function to reverse an integer and print
// using C language. For example if user enters 12323 then output should be 32321

int main(void) {
	char digits[80];
	char reversed[80];

	printf("Enter any nonnegative integer: ");
	scanf("%s", digits);
	puts(digits);

	int length = strlen(digits);
	printf("length = %d\n", length);

	for (int i = (length - 1); i >= 0; i--) {
		reversed[(length - 1) - i] = digits[i];
	} // next digit
	reversed[length] = '\0';

	printf("reversed: %s\n", reversed);

} // main()


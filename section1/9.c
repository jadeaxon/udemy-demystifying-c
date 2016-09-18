
#include <stdio.h>

// 8. A five digit number is input through the keyboard. Write a C program to find sum of all digits of
// a 5 digit number. For example if number entered by the user is 24351 then output should be 15.

int main(void) {
	char digits[6];
	char reversed[6];

	printf("Enter 5 digits: ");
	scanf("%5s", digits);

	for (int i = 4; i >= 0; i--) {
		reversed[4 - i] = digits[i];
	} // next digit
	reversed[5] = '\0';

	printf("reversed: %s\n", reversed);

} // main()


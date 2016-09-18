#include <stdio.h>

// 8. A five digit number is input through the keyboard. Write a C program to find sum of all digits of
// a 5 digit number. For example if number entered by the user is 24351 then output should be 15.

int main(void) {
	char digits[6];
	printf("Enter 5 digits: ");
	scanf("%6s", digits);

	int total = 0;
	for (int i = 0; i < 5; i++) {
		int value = digits[i] - '0'; // Assumes digits are in order as 0123456789 in char set.
		total += value;
	} // next digit

	printf("total: %d\n", total);

} // main()


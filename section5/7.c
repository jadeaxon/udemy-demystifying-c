#include <stdio.h> // Does not have gets()?!
#include <ctype.h>

/*
7. Any positive integer is entered through the keyboard. Write a program to print the number in
words… For example if 324 is entered through the keyboard, the output should be Three Two
Four… and if 12354 is entered through the keyboard the output would be One Two Three Five
Four.
*/

int main(void) {
	char numbers[80];
	printf("Enter a bunch of numbers: ");
	// FAIL: gets(numbers);
	fgets(numbers, 80, stdin);

	printf("%s\n", numbers);

	char* number = numbers;
	while (*number != '\0') {
		if (isdigit(*number)) {
			int digit = *number - '0';
			switch (digit) {
				case 0:
					printf("Zero "); break;
				case 1:
					printf("One "); break;
				case 2:
					printf("Two "); break;
				case 3:
					printf("Three "); break;
				case 4:
					printf("Four "); break;
				case 5:
					printf("Five "); break;
				case 6:
					printf("Six "); break;
				case 7:
					printf("Seven "); break;
				case 8:
					printf("Eight "); break;
				case 9:
					printf("Nine "); break;
				default:
					printf("??? "); break;
			} // switch
		} // if
		number++;
		
	} // next number

} // main()

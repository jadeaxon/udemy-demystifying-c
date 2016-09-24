
#include <stdio.h>

// 6. An integer is entered through the keyboard.  Write a program to print whether number entered is prime or not.

int main(void) {
	unsigned int number = 0;
	printf("number: ");
	scanf("%u", &number);

	if ((number == 1) || (number == 2)) {
		puts("prime");
		return 0;
	}

	for (int i = 2; i < number; i++) {
		if (number % i == 0) {
			puts("not prime");
			return 0;
		}
	}
	puts("prime");

} // main()



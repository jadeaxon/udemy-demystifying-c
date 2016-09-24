#include <stdio.h>

// 10. Write a program to print all prime numbers between 0 and 500.

int main(void) {
	for (int i = 0; i <= 500; i++) {	
		int number = i;
		int prime = 1;
		if (number == 0) {
			printf("%d is not prime\n", number);
			continue;
		}
		if ((number == 1) || (number == 2)) {
			printf("%d is prime\n", number);
			continue;
		}

		for (int j = 2; j < number; j++) {
			if (number % j == 0) {
				printf("%d is not prime\n", number);
				prime = 0;
				break;
			}
		}
		if (prime) {
			printf("%d is prime\n", number);
		}
	} // next number

} // main()



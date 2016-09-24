
#include <stdio.h>

/*
14. A positive integer is input through the keyboard. Write a function to obtain the prime
factors of this number. For example prime factors of 56 are 7, 2, 2 and 2 where as prime
factors of 26 are 13 and 2.
*/


// Prints out the prime factors of a number.
void prime_factors(int n) {
	if (n == 1) {
		puts("prime factor: 1"); 
		return;
	}

	while (n > 1) {
		// printf("n = %d\n", n);
		for (int i = 2; i <= n; i++) {
			if (n % i == 0) {
				printf("prime factor: %d\n", i);
				n /= i;
				break;
			}
		}
	} // next prime factor

} // prime_factors()


int main(void) {
	int num1 = 0;
	printf("num1: ");
	scanf("%d", &num1);

	prime_factors(num1);

} // main()



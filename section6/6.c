#include <stdio.h>

// 6. Write a function factorial to calculate and print factorial of any number entered through the keyboard.

// Calculates factorial.  Works for values 0 to 33.
// It appears that 34 overflows to the value 0 causing everything beyond it to have value 0.
// It actually overflows well before that but does not hit 0.
unsigned int factorial(unsigned int n) {
	if (n == 0) return 1; // Base case.
	return n * factorial(n - 1); // Recursion.
}

// Looks like max this will take you to is 40 factorial.
// You'd need some kind of bigint lib to go further.
unsigned long long big_factorial(unsigned int n) {
	if (n == 0) return 1; // Base case.
	return n * big_factorial(n - 1); // Recursion.
}

int main(void) {
	unsigned int number = 0;
	printf("number: ");
	scanf("%u", &number);

	unsigned int f = factorial(number);
	printf("f(%u) = %u\n", number, f);

	unsigned long long f2 = big_factorial(number);
	printf("f(%u) = %llu\n", number, f2);

} // main()



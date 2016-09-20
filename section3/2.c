#include <stdio.h>

// 2. Two integers are input through the keyboard. Write a program to print largest between two integers using if-else control structure

int main(void) {
	int first = 0;
	int second = 0;

	printf("first: ");
	scanf("%d", &first);
	printf("second: ");
	scanf("%d", &second);

	if (first > second) {
		printf("%d > %d\n", first, second);
	}
	else if (second > first) {
		printf("%d > %d\n", second, first);

	}
	else { // They are equal.
		printf("%d == %d\n", first, second);
	}


} // main()



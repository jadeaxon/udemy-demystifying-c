#include <stdio.h>

/*
2. Write a program to print sum of integers. At the beginning user will be asked how many numbers he is
going to enter. The output should be sum of all numbers entered by the user. (For example if user enters
6 at the beginning, then user will be prompted to enter 6 integers)
*/

int main(void) {
	int numbers = 0;
	int total = 0;
	printf("How many numbers do you want to total? ");
	scanf("%d", &numbers);

	for (int i = 1; i <= numbers; i++) {
		int number = 0;
		printf("number %d: ", i);
		scanf("%d", &number);
		total += number;	
		printf("total: %d\n", total);

	} // next number

} // main()



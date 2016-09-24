#include <stdio.h>

// 5. Two integer numbers are input through the keyboard. Write a C program to print one number raised to
// other number. For example if user enters 4 and 3 then output should be 4 raised to 3.

int mypow(int x, int y) {
	int result = 1;
	for (int i = 1; i <= y; i++) result *= x;
	return result;
}

int main(void) {
	int num1 = 0;
	printf("num1: ");
	scanf("%d", &num1);

	int num2 = 0;
	printf("num2: ");
	scanf("%d", &num2);

	int power = mypow(num1, num2);
	printf("power = %d\n", power);

} // main()



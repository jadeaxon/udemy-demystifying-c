#include <stdio.h>

// 9. Two integers are input through the keyboard.  Write a program to print largest between two integers using if-else control structure. (Make use of ternary operator).

int maxnum(int n1, int n2) {
	return (n1 > n2) ? n1 : n2;
}

int main(void) {
	int num1 = 0;
	printf("num1: ");
	scanf("%d", &num1);

	int num2 = 0;
	printf("num2: ");
	scanf("%d", &num2);

	int max = maxnum(num1, num2);

	printf("max: %d\n", max);

} // main()



#include <stdio.h>

// 10. Two numbers are input through the keyboard. Write a function maxnum to determine
// which number is largest between two integers.

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



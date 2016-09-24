#include <stdio.h>

// 13. Write a function pow(x,y) to calculate the value of x raised to y.

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



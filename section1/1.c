#include <stdio.h>

// 1. Three integers are input through the keyboard.  Write a C program to print sum of all three.

int main(void) {
	int x = 0;
	printf("x: ");
	scanf("%d", &x);

	int y = 0;
	printf("y: ");
	scanf("%d", &y);

	int z = 0;
	printf("z: ");
	scanf("%d", &z);

	int sum = x + y + z;
	printf("sum: %d\n", sum);

} // main()



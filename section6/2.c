#include <stdio.h>

// 2. Length and breadth of rectangle are input through the keyboard. Write a C program using
// function to calculate and print area of rectangle

int main(void) {
	int length = 0;
	printf("length: ");
	scanf("%d", &length);

	int width = 0;
	printf("width: ");
	scanf("%d", &width);

	int area = length * width;
	printf("area: %d\n", area);

} // main()



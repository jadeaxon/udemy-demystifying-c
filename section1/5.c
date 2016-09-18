#include <stdio.h>

// 5. Length and breadth of rectangle are input through the keyboard. Write a C program to print area and perimeter of rectangle.

int main(void) {
	int length = 0;
	printf("length: ");
	scanf("%d", &length);
	
	int width = 0;
	printf("width: ");
	scanf("%d", &width);

	int area = length * width;
	int perimeter = (length * 2) + (width * 2);

	printf("\n");
	printf("area: %d\n", area);
	printf("perimeter: %d\n", perimeter);

}

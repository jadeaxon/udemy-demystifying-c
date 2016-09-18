#include <stdio.h>

// 6. Radius of a circle is input through the keyboard. Write a C program to print area and
// circumference of a circle.

int main(void) {
	int radius = 0;
	printf("radius: ");
	scanf("%d", &radius);

	printf("\n");
	const float PI = 3.14;
	float area = PI * radius * radius;
	float circumference = 2.0 * PI * radius;

	printf("area: %f\n", area);
	printf("circumference: %f\n", circumference);

} // main()



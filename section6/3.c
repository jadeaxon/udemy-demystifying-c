#include <stdio.h>

// 3. Radius of a circle is entered through the keyboard. Write a C program to print area of a
// circle and circumference of a circle using functions.

int main(void) {
	int radius = 0;
	printf("radius: ");
	scanf("%d", &radius);


	float area = 3.14 * radius * radius; 
	printf("area: %f\n", area);

	float circ = 2 * 3.14 * radius;
	printf("circ: %f\n", circ);

} // main()



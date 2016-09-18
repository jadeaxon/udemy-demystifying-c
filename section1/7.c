#include <stdio.h>


// 7. Temperature of a city in degree centigrade is entered by the user. Write a C program to print temperature in Fahrenheit.

int main(void) {
	int centigrade = 0;
	printf("centigrade: ");
	scanf("%d", &centigrade);

	float fahrenheit = (1.8 * centigrade) + 32;
	printf("\n");
	printf("fahrenheit: %f\n", fahrenheit);

} // main()



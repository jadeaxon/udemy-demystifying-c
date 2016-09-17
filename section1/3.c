#include <stdio.h>

// 3. Distance in kilometers is entered by the user.  Write a C program to print distance in meters, feet, inches, and centimeters.

int main(void) {
	int kilometers = 0;
	printf("kilometers: ");
	scanf("%d", &kilometers);

	int meters = kilometers * 1000;
	int centimeters = meters * 100;

	float feet_per_meter = 3.28084;
	float inches_per_foot = 12.0;

	float feet = meters * feet_per_meter;
	float inches = feet * inches_per_foot;

	printf("meters: %d\n", meters);
	printf("feet: %f\n", feet);
	printf("inches: %f\n", inches);
	printf("centimeters: %d\n", centimeters);


} // main()

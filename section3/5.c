#include <stdio.h>

// 5. Any year is entered by the user through the keyboard. Write a C program to print whether the year is leap year or not.

void leap_year(int year) {
	if ( (year % 4 == 0 && year % 100 !=0) || year % 400 == 0 )
		puts("Leap year!");
	else // Not leap year.
		puts("Not a leap year.");
}


int main(void) {
	int year = 0;
	printf("year: ");
	scanf("%d", &year);

	leap_year(year);

} // main()



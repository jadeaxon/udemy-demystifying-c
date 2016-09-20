#include <stdio.h>

// 1. Write a C program to print day of the week. For example if user enters 1 out should be Monday.

int main(void) {
	int day = 0;
	printf("Day number: ");
	scanf("%d", &day);

	switch (day) {
		case 1:
			printf("Monday\n");
			break;
		case 2:
			printf("Tuesday\n");
			break;
		case 3: 
			printf("Wednesday\n");
			break;
		case 4:
			printf("Thursday\n");
			break;
		case 5:
			printf("Friday\n");
			break;
		case 6:
			printf("Saturday\n");
			break;
		case 7:
			printf("Sunday\n");
			break;
		default:
			printf("Invalid day number: %d.\n", day);
			break;
	} // switch

} // main()



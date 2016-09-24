// According to Gregorian Calendar, it was Monday on the date 01/01/2001. If any year is input,
// Write a program to display what is the day on the 1st January of this year.
//
// This appears to work.  I checked a couple results on Google.

#include <stdio.h>


int main(void) {
	int t = 0;
	int y, i, c = 0;

	// Asking this is a bit silly when you can just hit ^C.
	printf("iterations: ");
	scanf("%d", &t);
	
	while (t--) {		
		c = 0;
		printf("year: ");
		scanf("%d", &y);

		if (y > 2001) {
			for (i = 2001; i < y; i++) {
				if ( (i % 4 == 0 && i % 100 !=0) || i % 400 == 0 )
					c += 2;
				else // Not leap year.
					c++;
			}
			c =(1 + c % 7 ) % 7;
		}
		else {
			for (i = y; i < 2001; i++) {
				if ( (i % 4 == 0 && i % 100 != 0) || i % 400 == 0 )
					c += 2;
				else // Not leap year.
					c++;
			}
			c = (8 - c % 7) % 7;
		}

		switch (c) {
			case 0:
				printf("Sunday\n");
				break;

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

		} // switch
		printf("\n");

	} // next year

	return 0;

} // main()




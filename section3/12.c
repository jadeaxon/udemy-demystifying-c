#include <stdio.h>

// 12. Write a program to convert and print given time in seconds into hours, minutes and seconds. 
// For example if number of seconds entered are 90001 then output printed should be 25:00:1. 
// If 34 is entered by the user then output should be 0:0:34.

// Spec is ambiguous on zero-padding, so I'm not going to zero pad.

int convert_time(int seconds) {
	const int HOUR = 60 * 60;
	const int MINUTE = 60;

	int hours = seconds / HOUR;
	seconds %= HOUR;
	int minutes = seconds / MINUTE;
	seconds %= MINUTE;

	printf("%d:%d:%d\n", hours, minutes, seconds);

}

int main(void) {
	int seconds = 0;
	printf("seconds: ");
	scanf("%d", &seconds);

	convert_time(seconds);

} // main()



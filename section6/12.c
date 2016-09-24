#include <stdio.h>

/*
12. Write a general purpose function to convert any given year into its Roman equivalent. The
following table shows the roman equivalent of decimal numbers.
Decimal  Roman
1  i
5  v
10  x
50  l
100  c
500  d
1000  m
*/


// Prints a char to stdout multiple times.
void putchars(char c, int repeats) {
	for (int i = 1; i <= repeats; i++) {
		putchar(c);
	}
}

void roman(int year) {
	int ms = year / 1000;
	putchars('m', ms);
	year %= 1000;

	int ds = year / 500;
	putchars('d', ds);
	year %= 500;

	int cs = year / 100;
	putchars('c', cs);
	year %= 100;

	int ls = year/ 50;
	putchars('l', ls);
	year %= 50;

	int xs = year / 10;
	putchars('x', xs);
	year %= 10;

	int vs = year / 5;
	putchars('v', vs);
	year %= 5;

	int is = year / 1;
	putchars('i', is);

} // roman()


int main(void) {
	int year = 0;
	printf("year: ");
	scanf("%d", &year);

	roman(year);

} // main()



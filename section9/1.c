#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 1. A multi word string is input through the keyboard. Write a C program using function to convert lower case letter into upper case and upper case letters into lower case and print it.

int main(void) {
	char string[80];
	printf("Enter a string: ");
	fgets(string, 80, stdin);
	
	for (int i = 0; i < 80; i++) {
		char c = string[i];
		if (c == '\0') break;
		if (isupper(c)) string[i] = tolower(c);
		if (islower(c)) string[i] = toupper(c);
	} // next char
	puts(string);
	
} // main()



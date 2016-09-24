#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 7. A multi word string is input through the keyboard and a single word from the string itself is also taken from the user. For example a string entered is "She sells sea shells at the sea shore of pacific sea coast". Write a C program to find number of word "Sea" appears in a given string.

void chomp(char* s) {
	char c;
	while ( (c = *s++) != '\0') {
		if (c == '\n') {
			*(s - 1) = '\0';
		}
	}
}


int main(void) {
	char string[80] = "";
	char needle[80] = "";	

	printf("Search: ");
	fgets(needle, 80, stdin);
	chomp(needle);
	// This doesn't handle words at the end of sentance (ending in . or \0).
	strcat(needle, " "); 

	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	chomp(string);

	printf("search: %s\n", needle);
	printf("string: %s\n", string);

	char* found = strstr(string, needle);
	if (found) {
		puts("found");
	}
	else {
		puts("not found");
	}

} // main()



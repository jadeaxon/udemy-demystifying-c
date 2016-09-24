#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 6. Two strings, One string containing single word and other multi word string are input through the keyboard. Write a C program to determine whether first string is sub string of second string.

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



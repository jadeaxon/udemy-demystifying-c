#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 3. A multi word string is input through the keyboard. Write a C program to find number of vowels and consonants in a given string.

int main(void) {
	char string[80];
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	
	int vowels = 0;
	int consonants = 0;
	for (int i = 0; i < 80; i++) {
		char c = string[i];
		c = tolower(c);
		// printf("char: %c\n", c);	
		if (c == '\0') break;
		if (c == '\n') break;
		switch (c) {
			case 'a':
			case 'i':
			case 'e':
			case 'o':
			case 'u':
				vowels++; break;
			default:
				consonants++; break;
		} // switch
	} // next char
	
	printf("vowels: %d\n", vowels);
	printf("consonants: %d\n", consonants);

} // main()



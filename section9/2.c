#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 2. A multi word string is input through the keyboard. Write a C program to count number of words in a given string.

int main(void) {
	char string[80];
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	
	int words = 0;
	int word = 0; // We're in a word.
	int whitespace = 1; // We're in whitespace.
	for (int i = 0; i < 80; i++) {
		char c = string[i];
		// printf("char: %c\n", c);	
		if (c == '\0') break;
		if (c == '\n') break;
		if (c == ' ') { 
			whitespace = 1;
			word = 0;
		}
		else { // Word char.
			if (whitespace) {
				// puts("word transition");
				words++; // A whitespace-to-word transition has occurred.
				word = 1;
				whitespace = 0;
			}
		}
	} // next char
	
	printf("words: %d\n", words);
} // main()



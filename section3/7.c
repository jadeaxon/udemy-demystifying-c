
#include <stdio.h> // For printf() and scanf().
#include <stdlib.h> // For exit().
#include <ctype.h> // For tolower() and isalpha().

// 7. Any character is input through the keyboard. 
// Write a C program to determine whether the character is small case alphabet, capital letter, a digit or a special symbol

int main(void) {
	int first = 1;	
	while (1) {
		// Flush stdin.
		if (!first) {
			// FAIL: fflush() is only defined for output streams.
			// fflush(stdin); // Otherwise the buffered '\n' will cause program to exit.
			// FAIL: fseek(stdin, 0, SEEK_END); // Not sure why.	
			while ( getchar() != '\n' );	
		}

		char c = '\0';
		printf("Enter any character (blank to exit): ");
		scanf("%c", &c);

		if (c == '\n') exit(0);

		if (islower(c)) {
			puts("lowercase");
		}
		else if (isupper(c)) {
			puts("uppercase");
		}
		else if (isdigit(c)) {
			puts("digit");
		}
		else { // Special.
			puts("special");
		}

		first = 0; // Next iteration is not the first.
	} // next char

} // main()



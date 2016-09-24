#include <stdio.h> // For printf() and scanf().
#include <stdlib.h> // For exit().
#include <ctype.h> // For tolower() and isalpha().

// 5. An alphabet is entered through the keyboard.  Write a program to print whether an alphabet is
// vowel or consonant.

// 6. Modify above program so that program will run as many times as user wishes.  When user wants
// to stop running the program he should be able to stop.

// Letters themselves aren't really consonants or vowels, but we'll pretend they are.


// 6. Any alphabet is entered through the keyboard. Write a program to print whether the alphabet is vowel or consonant.

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
		printf("Enter an alphabet character (blank to exit): ");
		scanf("%c", &c);
		c = tolower(c);

		if (c == '\n') exit(0);

		if (!isalpha(c)) {
			printf("ERROR: %c is not an alphabet character!\n", c);
			exit(1);
		}

		switch (c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				printf("Vowel\n");
				break;
			case 'w':
			case 'y':
				printf("Depends\n");
				break;
			default:
				printf("Consonant\n");
				break;
		} // switch
	
		first = 0; // Next iteration is not the first.
	} // next char

} // main()



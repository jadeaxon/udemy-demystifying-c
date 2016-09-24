#include <stdio.h> // For printf() and scanf().
#include <stdlib.h> // For exit().
#include <ctype.h> // For tolower() and isalpha().

// 5. An alphabet is entered through the keyboard.  Write a program to print whether an alphabet is
// vowel or consonant.

// Letters themselves aren't really consonants or vowels, but we'll pretend they are.

int main(void) {
	char c = '\0';
	printf("Enter an alphabet character: ");
	scanf("%c", &c);
	c = tolower(c);

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

} // main()



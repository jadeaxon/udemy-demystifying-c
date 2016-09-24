
#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 9. A multi word string is input through the keyboard. Write a C program to delete repeated words in a string.

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
	char to_replace[80] = "";	
	char replacement[80] = "";
	char* token;
	
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	chomp(string);
	
	printf("Word to replace: ");
	fgets(to_replace, 80, stdin);
	chomp(to_replace);

	printf("Replacement: ");
	fgets(replacement, 80, stdin);
	chomp(replacement);
		
	token = strtok(string, " \n.");
	while (token != NULL) {
		// Need a way to preserve the non-tokens so they remain unchanged.
		if (strcmp(token, to_replace) == 0) {
			printf("%s ", replacement); 
		}
		else {
			printf("%s ", token);
		}
		token = strtok(NULL, " \n");
		
	}
	printf("\n");

} // main()



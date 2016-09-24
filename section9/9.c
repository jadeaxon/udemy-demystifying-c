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
	char last[80] = "";	
	char* token;
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	chomp(string);
	
	token = strtok(string, " \n");
	while (token != NULL) {
		if (strcmp(token, last) != 0) {
			printf("%s ", token);
		}
		strcpy(last, token);
		token = strtok(NULL, " \n");
		
	}
	printf("\n");

} // main()



#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 5. A multi word string is entered through the keyboard. Write a C program using function to find the largest and smallest word in a given string.

int main(void) {
	char string[80] = "";
	char min_word[80] = "";
	char max_word[80] = "";
	char* token;
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	
	int length = 0;
	int min_length = 65000;
	int max_length = 0;

	token = strtok(string, " \n");
	while (token != NULL) {
		puts(token);
		length = strlen(token);
		printf("length: %d\n", length);	
		if (length < min_length) {
			min_length = length;
			strcpy(min_word, token);
		}
		if (length > max_length) {
			max_length = length;
			strcpy(max_word, token);
		}
		
		token = strtok(NULL, " \n");
	}
	puts(min_word);
	puts(max_word);

} // main()



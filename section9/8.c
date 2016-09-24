#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 8. A multi word string is input through the keyboard. Write a C program to reverse each word of the string and print it.

// There's no strrev() in Linux string.h.
// reverse the given null-terminated string in place
void strrev(char* str) {
	if (str) {
		char * end = str + strlen(str) - 1;

		// swap the values in the two given variables
		// XXX: fails when a and b refer to same memory location
#   define XOR_SWAP(a,b) do\
		{\
			a ^= b;\
			b ^= a;\
			a ^= b;\
		} while (0)

		// walk inwards from both ends of the string, 
		// swapping until we get to the middle
		while (str < end)
		{
			XOR_SWAP(*str, *end);
			str++;
			end--;
		}
#   undef XOR_SWAP
	}
}


int main(void) {
	char string[80] = "";
	char reverse[80] = "";	
	char* token;
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	
	int length = 0;
	int min_length = 65000;
	int max_length = 0;

	token = strtok(string, " \n");
	while (token != NULL) {
		puts(token);
		strcpy(reverse, token);
		strrev(reverse);
		puts(reverse);

		token = strtok(NULL, " \n");
		puts("");
	}

} // main()



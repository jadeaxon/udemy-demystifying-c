#include <stdio.h>
#include <string.h>
#include <ctype.h>

// 4. A string containing single word is entered through the keyboard. Write a C program using user defined function to check whether the string is palindrome or not.

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

void chomp(char* s) {
	char c;
	while ( (c = *s++) != '\0') {
		if (c == '\n') {
			*(s - 1) = '\0';
		}
	}
	// while(*--s == '\n') *s = '\0';
}


// Returns 0 if given string is a palindrome.
int is_palindrome(const char* s) {
	char* r = strdup(s);
	strrev(r);
	puts("Reverse:");
	puts(r);	
	if (strcmp(s, r) == 0) {
		return 1;
	}
	return 0;

}

int main(void) {
	char string[80];
	printf("Enter a string: ");
	fgets(string, 80, stdin); // This does keep the newline.
	chomp(string);

	if (is_palindrome(string)) {
		puts("palindrome");
	}
	else {
		puts("not palindrome");
	}

} // main()



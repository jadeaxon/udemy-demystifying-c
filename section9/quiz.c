// First question in quiz on strings.  This comes after section 9.
// Quiz answer is 'Error'.

// The correct answer is obviously 'Unequal' as compiling and executing the code shows.

#include<stdio.h>
void main() {
		char str1[] = "abcd";
		char str2[] = "abcd";
		if(str1==str2)
			printf("Equal");
		else
			printf("Unequal");
}


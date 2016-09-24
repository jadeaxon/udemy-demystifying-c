#include <stdio.h>

// 10. Three integers are input through the keyboard. Write a C program to print largest among three numbers. (Use if-else control structure)

// Returns the greatest of three ints.
int maxnum(int n1, int n2, int n3) {
	if ( (n1 >= n2) && (n1 >= n3) ) {
		return n1;
	}
	else if ( (n2 >= n1) && (n2 >= n3) ) {
		return n2;
	}
	else {
		return n3;
	}
} // maxnum()


int main(void) {
	int num1 = 0;
	printf("num1: ");
	scanf("%d", &num1);

	int num2 = 0;
	printf("num2: ");
	scanf("%d", &num2);

	int num3 = 0;
	printf("num3: ");
	scanf("%d", &num3);

	int max = maxnum(num1, num2, num3);

	printf("max: %d\n", max);

} // main()




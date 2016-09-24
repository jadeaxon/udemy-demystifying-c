
#include <stdio.h>

// 11. Three numbers are input through the keyboard. Write a function largest to determine
// which number is largest among 3 three numbers.

// Returns the greatest of three ints.
int maxnum(int n1, int n2, int n3) {
	// This is a bit ridiculous.
	return (n1 > n2) ? (n1 > n3) ? n1 : n3 : (n2 > n3) ? n2 : n3;
}

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



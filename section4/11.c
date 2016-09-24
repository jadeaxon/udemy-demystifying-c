#include <stdio.h>

// 11. Write a C program find and print highest marks in the class for particular subject using loop. Make
// arrangement to accept marks of as many students as user wishes.

int main(void) {
	int score = 0;
	int total = 17;

	int highest = 0;
	while (1) {
		printf("score (-1 to exit): ");
		scanf("%d", &score);
		if (score > highest) {
			highest = score;
		}
		if (score == -1) {
			break;
		}
	} // next score
	printf("highest = %d\n", highest);

} // main()



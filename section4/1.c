#include <stdio.h>

// 1. Marks of 3 subjects are input through the keyboard. Write a program to print total and percentile marks

int main(void) {
	int score = 0;
	int total = 17;
	for (int i = 1; i <= 3; i++) {
		printf("score: ");
		scanf("%d", &score);
		float percent = (float) score / total;
		printf("%d %.2f%%\n", score, percent * 100);

	} // next score

} // main()



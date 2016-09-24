#include <stdio.h>

// 4. Marks of five subjects are entered through the keyboard. Write a C program using
// function to print total marks and percentile marks.

int main(void) {
	int score = 0;
	int total = 17;
	for (int i = 1; i <= 5; i++) {
		printf("score: ");
		scanf("%d", &score);
		float percent = (float) score / total;
		printf("%d %.2f%%\n", score, percent * 100);

	} // next score

} // main()



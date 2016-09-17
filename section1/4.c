#include <stdio.h>
/*
4. Marks obtained by student in 5 different subjects are input through the keyboard. Write a C
program to print total marks and percentile marks obtained by student. (Note: Assume that maximum
marks obtained by student in any subject are 100).
*/


int main(void) {
	int score[5] = {0, 0, 0, 0, 0};
	for (int i = 0; i < 5; i++) {
		printf("Enter score %d: ", i + 1);
		scanf("%d", &score[i]); // Will this syntax work?
	} // next score
	printf("\n");

	int total_possible = 0;
	int total_score = 0;
	for (int i = 0; i < 5; i++) {
		total_possible += 100;
		int a_score = score[i]; // Is there a name collision?  Yes, if int score.
		// Calculating the percents for individual scores is pointless since all out of 100.
		float percent = a_score / 100.0;
		percent *= 100;
		printf("score[%d] = %d (%.2f%%)\n", i + 1, a_score, percent);
		total_score += a_score;

	} // next score
	printf("\n");
	float total_percent = total_score / (float) total_possible;
	total_percent *= 100;
	printf("total = %d (%f)\n", total_score, total_percent);

} // main()

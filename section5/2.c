#include <stdio.h>
#include <stdbool.h> // For bool type.

/*
2. Write a menu driven program to print result of various operations on two integers. Two integers
would be entered by the user and then user should be given prompt to select operation of his
choice to perform on these two integers. The program should give output on the basis of choice
selected by the user.
For example if user enters 2 integers as 10 and 20 and asks for addition of two numbers then
output should be 30. If he asks for multiplication of 2 integers then program should print 200 as
output and so on…
The program should run till user wishes…
The menu options could be like Enter 1 for addition, 2 for multiplication etc.
*/


int lop = 0; // Left operand.
int rop = 0; // Right operand.
int result = 0; // Result of operation.


// Displays numeric menu and returns user selection.
int menu(void) {
	int selection = 0;
	
	printf("Menu-driven Math\n");
	printf("Left operand: %d\n", lop);
	printf("Right operand: %d\n", rop);
	printf("1. Add\n");
	printf("2. Subtract\n");
	printf("3. Multiply\n");
	printf("4. Divide\n");
	printf("5. Modulo\n");
	printf("6. Ask for new operands\n");
	printf("7. Exit\n");
	printf("> ");
	
	scanf("%d", &selection);
	return selection;
} // menu()


// Asks user for the left and right operands.
void ask_for_operands() {
	printf("Left operand: ");
	scanf("%d", &lop);
	printf("Right operand: ");
	scanf("%d", &rop);
	printf("\n");

} // ask_for_operands()


int main(void) {
	printf("Welcome to Menu-driven Math!\n");
	bool done = false;

	ask_for_operands();
	while (!done) {
		int selection = menu();
		switch (selection) {
			case 1:
				result = lop + rop; break;
			case 2:
				result = lop - rop; break;
			case 3:
				result = lop * rop; break;
			case 4:
				result = lop / rop; break;
			case 5:
				result = lop % rop; break;
			case 6:
				ask_for_operands();
				continue;
			case 7:
				done = true; break;
			default:
				printf("Invalid selection: %d.\n", selection);
				break;
		} // switch

		if (done) break;
		printf("Result: %d\n\n", result);

	} // next menu selection
	
	printf("May the Source be with you.\n");

} // main()




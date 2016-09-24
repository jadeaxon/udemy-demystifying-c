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

4. Write above program by modifying the menu like + for addition, * for multiplication, - for
subtraction etc.
*/


int lop = 0; // Left operand.
int rop = 0; // Right operand.
int result = 0; // Result of operation.


// Displays numeric menu and returns user selection.
char menu(void) {
	char selection = '\0';
	
	printf("Menu-driven Math\n");
	printf("Left operand: %d\n", lop);
	printf("Right operand: %d\n", rop);
	printf("+. Add\n");
	printf("-. Subtract\n");
	printf("*. Multiply\n");
	printf("/. Divide\n");
	printf("%%. Modulo\n");
	printf("N. Ask for new operands\n");
	printf("E. Exit\n");
	printf("> ");
	
	scanf("%c", &selection);
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
			case '+':
				result = lop + rop; break;
			case '-':
				result = lop - rop; break;
			case '*':
				result = lop * rop; break;
			case '/':
				result = lop / rop; break;
			case '%':
				result = lop % rop; break;
			case 'N':
				ask_for_operands();
				continue;
			case 'E':
				done = true; break;
			default:
				printf("Invalid selection: %c.\n", selection);
				break;
		} // switch

		if (done) break;
		printf("Result: %d\n\n", result);

	} // next menu selection
	
	printf("May the Source be with you.\n");

} // main()




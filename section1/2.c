#include <stdio.h>

/*
2. Basic salary of an employee is input through the keyboard. Employee gets 25% of the basic pay
towards conveyance allowance and 27% of basic pay towards medical allowance. Write a program to
print net salary of an employee if tax deduction is 17% of the gross pay. Print Gross Salary as well
as net salary.
*/

int main(void) {
	int salary = 0;
	printf("Salary: ");
	scanf("%d", &salary);

	float conveyance = 1.25;
	float medical = 1.27;
	float tax = 1.0 - .17;
	float gross_salary = (int) (salary * conveyance * medical);
	float net_salary = tax * gross_salary;

	printf("Net salary: $%f\n", net_salary);

} // main()

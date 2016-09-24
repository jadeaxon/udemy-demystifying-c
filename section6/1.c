#include <stdio.h>

// 1. Write a C program to find sum of two integers using function sum( ), and product of
// same integers using function product( ).

int sum(int, int);
int product(int, int);

int main(void) {
	int x = 3;
	int y = 7;
	int xpy = sum(x, y);
	int xty = product(x, y);

	printf("x: %d y: %d xpy: %d xty: %d\n", x, y, xpy, xty);

} // main()


int sum(int lop, int rop) {
	return lop + rop;
}

int product(int lop, int rop) {
	return lop * rop;
}



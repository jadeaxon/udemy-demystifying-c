#include<stdio.h>

int callme(int);

int main() {
	int i = callme(10);
	printf("i = %d\n", --i);
	return 0;
}

int callme(int x) {
	return x++;
}



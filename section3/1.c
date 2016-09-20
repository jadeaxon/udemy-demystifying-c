#include <stdio.h>

// 1. If cost and selling price of a particular item is input through the keyboard, write a C program to determine whether a trader has made a profit or loss. Also print how much loss he has incurred or profit he has earned


int main(void) {
	int cost = 0;
	int sales_price = 0;
	
	printf("cost: ");
	scanf("%d", &cost);
	
	printf("sales_price: ");
	scanf("%d", &sales_price);

	int delta = sales_price - cost; // Profit or loss.
	printf("delta: %d\n", delta);

} // main()

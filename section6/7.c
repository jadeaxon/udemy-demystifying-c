#include <stdio.h>

// 7. Write a C program to find HCF and LCM of any two numbers entered through the
// keyboard.  Highest common factor?  Lowest common multiple?


// Calculates the highest common factor (HCF) shared by the two given numbers.
int highest_common_factor(int n1, int n2) {
	int greatest = (n1 > n2) ? n1 : n2;
	int hcf = 1;
	for (int i = 1; i <= greatest; i++) {
		if ( (n1 % i == 0) && (n2 % i == 0) ) {
			hcf = i;
		}
	} // next potential HCF
	return hcf;
} // hcf()

// Calculates the least common multiple (LCM) of the two given numbers.
int lowest_common_multiple(int n1, int n2) {
	int m1 = 0;
	int m2 = 0;
	m1 += n1;
	m2 += n2;

	// We keep "multiplying" whichever multiple is behind until we reach a point where the two
	// multiples are equal.  This gives us the least common multiple.
	while (1) {
		if (m1 < m2) {
			m1 += n1;
		}
		else if (m2 < m1) {
			m2 += n2;
		}
		else { // m1 == m2
			return m1;
		}
	} // next increase
} // lcm()

int main(void) {
	int num1 = 0;
	printf("num1: ");
	scanf("%d", &num1);

	int num2 = 0;
	printf("num2: ");
	scanf("%d", &num2);

	int hcf = highest_common_factor(num1, num2);
	int lcm = lowest_common_multiple(num1, num2);

	printf("hcf: %d\n", hcf);
	printf("lcm: %d\n", lcm);

} // main()



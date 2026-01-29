/* binary.c -- prints integer in binary form */
#include <stdio.h>

void to_base_n(unsigned long n, int base);
int main(void)
{
	unsigned long number;
	int base;

	printf("Enter an integer and a base(q to quit):\n");
	while (scanf("%lu %d", &number, &base) == 2)
	{
		if (base < 2 || base > 16) {	
			printf("Invalid number!");
		} else {
			printf("Base-%d equivalent: ", base);
			if (base == 8) {
				printf("0");
			} else if (base == 16) {
				printf("0x");
			}
			to_base_n(number, base);
			putchar('\n');
		}
		printf("Enter an integer and a base(q to quit):\n");
	}
	printf("Done.\n");
	
	return 0;
}

void to_base_n(unsigned long n, int base)  /* recursive function */
{
	int r;
	r = n % base;
	char words[] = "0123456789abcdef"; // 0-16
	if (n >= base) {
		to_base_n(n / base, base); //divides num by base ex: 21/8 leaves 2 remainder 5 so new to_base_n(2, 8)
	}
	putchar(words[r]);
	return;
}



// 	if (2 >= n || n >= 16) {
// 		printf("Invalid number!");
// 	} else {
// 		m = 
// 	}
// 	m = 
// 
// Exercise 10.10 and 10.11
// A. Perkins

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void displayBits( unsigned int value );
void power2( unsigned int number, unsigned int pow ) ;

int main()
{
	unsigned int n;
	printf("Enter an integer to right shift: ");
	scanf("%u", &n);
	unsigned int newN = n>>4;
	printf("The old integer in binary: ");
	displayBits(n);
	printf("The new integer in binary: ");
	displayBits(newN);

	unsigned int pow;
	printf("Enter an integer to raise to the power of 2: ");
	scanf("%u", &n);
	printf("Enter an integer to be the the two's power: ");
	scanf("%u", &pow);
	printf("%u times 2 to the %u power is: ", n, pow);
	power2(n, pow);
}

void displayBits( unsigned int value )
{
	unsigned int displayMask = 1 << 31;
	printf("%10u = ", value);
	for (unsigned int c = 1; c <= 32; ++c)
	{
		putchar(value & displayMask ? '1' : '0');
		value <<=1;
		if (c%8 == 0)
		{
			putchar(' ');
		}
	}
	putchar('\n');
}

void power2( unsigned int number, unsigned int pow )
{
	unsigned int newNum = number << pow;
	displayBits(newNum);
}
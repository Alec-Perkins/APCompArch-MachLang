// Exercise 10.12 and 10.13
// A. Perkins

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void displayBits( unsigned int value );
void packCharacters(char char1, char char2);

int main()
{
	char c1;
	char c2;
	printf("Please enter a character: \n");
	getchar();
	scanf("%c", &c1);
	displayBits(c1);
	printf("Please enter another character: \n");
	getchar();
	scanf("%c", &c2);
	displayBits(c2);

	printf("Packing the bits results in: ");
	packCharacters(c1, c2);
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

void packCharacters(char c1, char c2)
{
	unsigned int ret = c1;
	ret <<= 8;
	ret = ret | c2;
	displayBits(ret);
}


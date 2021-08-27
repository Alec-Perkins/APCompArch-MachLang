//Exercise 2.24
//A. Perkins
#include <stdio.h>

int main()
{
	int num1;
	printf("Enter one integer: ");
	scanf("%d", &num1);
	if (num1 % 2 == 0)
	{
		printf("The integer is even.\n");
	} else {
		printf("The integer is odd.\n");
	}

	return 0;
}
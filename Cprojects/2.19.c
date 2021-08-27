//Exercies 2.19
//A. Perkins
#include <stdio.h>

int main()
{
	int num1,num2,num3;
	printf("Enter three different integers: ");
	scanf("%d%d%d", &num1, &num2, &num3);
	int sum = num1+num2+num3;
	printf("Sum is %d\n", sum);
	int ave = (num1+num2+num3)/3;
	printf("Average is %d\n", ave);
	int prod = num1*num2*num3;
	printf("Product is %d\n", prod);
	int small;
	if (num1 < num2 && num1 < num3)
	{
		small = num1;
	}
	if (num2 < num1 && num2 < num3)
	{
		small = num2;
	}
	if (num3 < num1 && num3 < num2)
	{
		small = num3;
	}
	printf("Smallest is %d\n", small);
	int big;
	if (num1 > num2 && num1 > num3)
	{
		big = num1;
	}
	if (num2 > num1 && num2 > num3)
	{
		big = num2;
	}
	if (num3 > num1 && num3 > num2)
	{
		big = num3;
	}
	printf("Biggest is %d\n", big);
	return 0;
}
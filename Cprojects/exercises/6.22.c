// Exercise 6.22 Total Sales
// A. Perkins

#include <stdio.h>

double slips[20][3] = {{1, 2, 500.5},{2, 4, 500.5},{3, 1, 500.5},{4, 3, 500.5},{4, 5, 500.5},{1, 4, 500.5},{2, 3, 500.5},{3, 5, 500.5},{4, 1, 500.5},{2, 2, 500.5},{1, 5, 500.5},{2, 1, 500.5},{3, 3, 500.5},{4, 2, 500.5},{3, 4, 500.5},{1, 3, 500.5},{2, 5, 500.5},{3, 2, 500.5},{4, 4, 500.5},{1, 1, 500.5}};

int main(void)
{
	double num[4][5] = {0.0}; // Amount of each product that a salesman sold
	double prodTotal[5] = {0.0}; // Total for each product
	double manTotal[5] = {0.0}; // Total for each salesman

	for (int row = 0; row < 20; row++)
	{
		for (int person = 0; person < 4;person ++)
		{
			if (slips[row][0] == (person+1))
			{
				if (slips[row][1] == 1)
				{
					num[person][0] += slips[row][2];
					prodTotal[0] += slips[row][2];
				}
				else if (slips[row][1] == 2)
				{
					num[person][1] = slips[row][2];
					prodTotal[1] += slips[row][2];
				}
				else if (slips[row][1] == 3)
				{
					num[person][2] = slips[row][2];
					prodTotal[2] += slips[row][2];
				}
				else if (slips[row][1] == 4)
				{
					num[person][3] = slips[row][2];
					prodTotal[3] += slips[row][2];
				}
				else if (slips[row][1] == 5)
				{
					num[person][4] = slips[row][2];
					prodTotal[4] += slips[row][2];
				}
				manTotal[person] += slips[row][2];
			}
		}
	}

	printf("%10d%10d%10d%10d%10d%15s\n", 1, 2, 3, 4, 5, "Total");
	for (size_t i = 0; i < 4; i++)
	{
		printf("%5ld",i+1);

		for(size_t u = 0; u < 6; u++)
		{
			if (u < 5)
			{
				printf("%10.2lf",num[i][u]);
			}
			else
			{
				printf("%10.2lf \n",manTotal[i]);
			}
		}
	}
	printf("Total%10.2lf%10.2lf%10.2lf%10.2lf%10.2lf",prodTotal[0],prodTotal[1],prodTotal[2],prodTotal[3],prodTotal[4]);
}
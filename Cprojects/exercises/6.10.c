//Exercise 6.10 Sales Commissions
//A. Perkins
#include <stdio.h>

int main()
{
	double sales[] = {100, 1200, 2400, 2400, 3000, 9000, 4200, 200, 1500, 8500, 3300, 10000, 1000, 2200};
	int counters[] = {0, 0, 0, 0, 0, 0, 0, 0, 0};

	for (size_t i=0; i<14; ++i)
	{
		double s = (0.09 * sales[i]) + 200;
		if (s >= 200 && s <= 299)
		{
			counters[0]++;
		}
		else if (s >= 300 && s <= 399)
		{
			counters[1]++;
		}
		else if (s >= 400 && s <= 499)
		{
			counters[2]++;
		}
		else if (s >= 500 && s <= 599)
		{
			counters[3]++;
		}
		else if (s >= 600 && s <= 699)
		{
			counters[4]++;
		}
		else if (s >= 700 && s <= 799)
		{
			counters[5]++;
		}
		else if (s >= 800 && s <= 899)
		{
			counters[6]++;
		}
		else if (s >= 900 && s <= 999)
		{
			counters[7]++;
		}
		else if (s >= 1000)
		{
			counters[8]++;
		}
	}
	for (size_t i=0; i<9; ++i)
	{
		printf("%d\n", counters[i]);
	}
	return 0;
}
// The Tortoise and the Hare
// A. Perkins

#include <stdio.h>
#include <time.h>

void delay(int number_of_seconds);

int main()
{
	int h = 0;
	int t = 0;
	while (h < 70 && t < 70)
	{
		delay();

	}
	return 0;
}

void delay(int number_of_seconds)
{
	int milli_seconds = 1000 * number_of_seconds;

	clock_t start_time = clock();

	while (clock() < start_time + milli_seconds)
		;
}
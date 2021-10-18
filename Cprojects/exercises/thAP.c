// The Tortoise and the Hare
// A. Perkins

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void delay(int number_of_seconds);
int tort(int num);
int hare(int num);
void display(int t, int h);

int main()
{
	srand(time(NULL));
	int h = 0;
	int t = 0;
	while (h < 70 && t < 70)
	{
		delay(1);
		int tStep = (rand() % 10) + 1;
		int hStep = (rand() % 10) + 1;
		t += tort(tStep);
		h += hare(hStep);
		display(t, h);
	}
	return 0;
}

int tort(int num)
{
	switch (num)
	{
		case 1 ... 5:
			return 3;
			break;
		case 6 ... 7:
			return -6;
			break;
		case 8 ... 10:
			return 1;
			break;
	}
}

int hare(int num)
{
	switch (num)
	{
		case 1 ... 2:
			return 0;
			break;
		case 3 ... 4:
			return 9;
			break;
		case 5:
			return -12;
			break;
		case 6 ... 8:
			return 1;
			break;
		case 9 ... 10:
			return -2;
			break;
	}
}

void display(int t, int h)
{
	char str [80];
	for (size_t i = 0; i < 70; i++){
		str[i] = '-';
	}
	for (size_t j = 70; j < 80; j++)
	{
		str[j] = ' ';
	}
	str[t] = 'T';
	str[h] = 'H';
	printf("%s\n", str);
	if (t > 70 && h > 70)
	{
		puts("It’s a tie.\n");
	}
	else if (t > 70)
	{
		puts("TORTOISE WINS!!! YAY!!!");
	}
	else if (h > 70)
	{
		puts("Hare wins. Yuch.");
	}
}

void delay(int number_of_seconds)
{
	int milli_seconds = 1000 * number_of_seconds;
	clock_t start_time = clock();
	while (clock() < start_time + milli_seconds)
		;
}
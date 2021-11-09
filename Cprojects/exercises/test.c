// Use for testing c

#include <stdio.h>

void change(char test[2][2]);

int main() {
	char test[2][2] = {"al", "ry"};

	puts("Does this work without wifi?");

	change(test);
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 2; j++)
		{
			printf("%c", test[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void change(char test[2][2])
{
	test[0][0] = 'e';
	test[0][1] = 't';
	test[1][0] = 'j';
	test[1][1] = 'o';
}

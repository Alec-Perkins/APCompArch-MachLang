// Gender Neutrality Project
// A. Perkins

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

#define FNAME "sexist.txt"
#define LENGTH 1024

void replace(char line[LENGTH]);
void daughter(char line[LENGTH], int index);

int main(void)
{
	FILE *fptr;
	char line[LENGTH];
	fptr = fopen( FNAME, "r");
	fgets(line, sizeof(line), fptr);
	printf("%s\n",line);

	replace(line);
}

void replace(char line[LENGTH])
{
	for (int i=0; i<LENGTH; i++)
	{
		if (line[i] == ' ')
		{
			daughter(line, i);
		}
	}
}

void daughter(char line[LENGTH], int index)
{
	char word[9];
	strncpy(word, line + index, 9);
	// printf("%s\n", word);
	if (strcmp(word, "daughter") == 0)
	{
		printf("%s\n", word);
	}

}
// Gender Neutrality Project
// A. Perkins

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

// Magic numbers
#define FNAME "sexist.txt"
#define LENGTH 1024

// Function prototypes
void replace(char line[LENGTH]);

int main(void)
{
	FILE *fptr;
	char line[LENGTH];
	fptr = fopen( FNAME, "r");
	fgets(line, sizeof(line), fptr);

	replace(line);

	return 0;
}

void replace(char line[LENGTH])
{
	char *t;
	t = strtok(line, " ");
	while (t != NULL)
	{
		printf("%s", t);
		if (strcmp(t, "girl") == 0 || strcmp(t, "boy") == 0)
		{
			t = "person";
		}
		printf(" %s ", t);
		t = strtok(NULL, " ");
	}
	// printf("%s", line);
}

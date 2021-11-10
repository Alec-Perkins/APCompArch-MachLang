// Works almost completely, however there needs to be more replacement words for every gendered word,
// and this could go on infinitely. Also the possessive her is different from the noun her so grammar
// errors occur.

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
	// Open file
	FILE *fptr;
	char line[LENGTH];
	fptr = fopen( FNAME, "r");
	fgets(line, sizeof(line), fptr);

	// Replace the words in the file
	replace(line);

	return 0;
}

// Takes the file and replaces the specified words
void replace(char line[LENGTH])
{
	// Creates a token for each word split by spaces and tests them to be replaced
	char *t;
	t = strtok(line, " ");
	while (t != NULL)
	{
		if (strcmp(t, "girl") == 0 || strcmp(t, "boy") == 0)
		{
			t = "person";
		}

		else if (strcmp(t, "girls") == 0 || strcmp(t, "boys") == 0)
		{
			t = "persons";
		}

		else if (strcmp(t, "husband") == 0 || strcmp(t, "wife") == 0)
		{
			t = "spouse";
		}

		else if (strcmp(t, "daughter") == 0 || strcmp(t, "son") == 0)
		{
			t = "child";
		}

		else if (strcmp(t, "daughters") == 0 || strcmp(t, "sons") == 0)
		{
			t = "children";
		}

		else if (strcmp(t, "him") == 0 || strcmp(t, "her") == 0)
		{
			t = "them";
		}

		else if (strcmp(t, "he") == 0 || strcmp(t, "she") == 0)
		{
			t = "they";
		}

		printf("%s ", t);
		// Allows for the program to carry on from where it left off
		t = strtok(NULL, " ");
	}
}

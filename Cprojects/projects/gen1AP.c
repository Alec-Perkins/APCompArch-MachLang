// The code seems to work for replacing the first few words such as: "daughter, husband, wife, girl, boy",
// but the code stops being able to fit the string copy into a temp string the more I edit the line char array

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
void daughter(char line[LENGTH]);
void son(char line[LENGTH]);
void husband(char line[LENGTH]);
void wife(char line[LENGTH]);
void man(char line[LENGTH]);
void woman(char line[LENGTH]);
void businesswoman(char line[LENGTH]);
void businessman(char line[LENGTH]);
void girl(char line[LENGTH]);



int main(void)
{
	// Opens file
	FILE *fptr;
	char line[LENGTH];
	fptr = fopen( FNAME, "r");
	fgets(line, sizeof(line), fptr);

	// Runs the function to call each word to be replaced
	replace(line);
	printf("%s\n",line);
}

// Calls each function for each word that must be replaced
void replace(char line[LENGTH])
{
	son(line);
	daughter(line);
	husband(line);
	wife(line);
	man(line);
	woman(line);
	businesswoman(line);
	businessman(line);
	girl(line);
}

// The comments on this function are true for all following functions: <------------ IMPORTANT
// Replaces just one word in the entire file
void daughter(char line[LENGTH])
{
	// Iterates through the file dividing it up by spaces
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			// Creates a test, replacement word, and word array to put the string slice into
			char test[] = "daughter";
			char replace[] = " child";
			int len = strlen(test);
			char word[9];
			// Slices the string to be tested from the file
			strncpy(word, line + index + 1, len);
			// Tests to see if the string matches the word being looked for
			if (strcmp(word, test) == 0)
			{
				// Creates a temp for the new full file
				char temp[strlen(line)+len];
				// Copies the first part of the file before the replacement word onto the temp
				strncpy(temp, line, index+1);
				// Copies the new word onto the temp
				strncpy(temp + index, replace, strlen(replace)+1);
				// Copies the remaining file onto the temp
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				// Sets the old file equal to the new temp
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void son(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "son";
			char replace[] = " child";
			int len = strlen(test);
			char word[4];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void husband(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "husband";
			char replace[] = " spouse";
			int len = strlen(test);
			char word[8];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void wife(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "wife";
			char replace[] = " spouse";
			int len = strlen(test);
			char word[5];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void man(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "man";
			char replace[] = "person";
			int len = strlen(test);
			char word[4];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void woman(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "woman";
			char replace[] = "person";
			int len = strlen(test);
			char word[6];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void businesswoman(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "businesswoman";
			char replace[] = "businessperson";
			int len = strlen(test);
			char word[50];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void businessman(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "businessman";
			char replace[] = " businessperson";
			int len = strlen(test);
			char word[50];
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}

void girl(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "girl";
			char replace[] = " person";
			int len = strlen(test);
			char word[100];
			// printf("%s\n", word);
			strncpy(word, line + index + 1, len);
			if (strcmp(word, test) == 0)
			{
				char temp[strlen(line)+len];
				strncpy(temp, line, index+1);
				strncpy(temp + index, replace, strlen(replace)+1);
				strncpy(temp + index + strlen(replace), line + index + len + 1, strlen(line) - index - strlen(replace) + 1);
				strncpy(line, temp, strlen(temp));
			}
		}
	}
}


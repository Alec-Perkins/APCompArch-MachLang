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



int main(void)
{
	FILE *fptr;
	char line[LENGTH];
	fptr = fopen( FNAME, "r");
	fgets(line, sizeof(line), fptr);

	replace(line);
	printf("%s\n",line);
}

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
}

void daughter(char line[LENGTH])
{
	for (int index=0; index<LENGTH; index++)
	{
		if (line[index] == ' ')
		{
			char test[] = "daughter";
			char replace[] = " child";
			int len = strlen(test);
			char word[9];
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
			char word[14];
			strncpy(word, line + index + 1, len);
			printf("%s\n", word);
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
			char replace[] = "businessperson";
			int len = strlen(test);
			char word[12];
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


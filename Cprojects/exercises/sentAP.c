// Exercise 8.11
// A. Perkins

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void makeSentence(char* article[], char* noun[], char* verb[], char* preposition[]);

int main()
{
	srand(time(NULL));
	char* article[5] = {"the\0", "a\0", "one\0", "some\0", "any\0"};
	char* noun[5] = {"boy", "girl", "dog", "town", "car"};
	char* verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
	char* preposition[5] = {"to", "from", "over", "under", "on"};
	
	makeSentence(article, noun, verb, preposition);
}

void makeSentence(char* article[], char* noun[], char* verb[], char* preposition[])
{
	char result[100] = " ";

	int choice = (rand() % 5);
	char *art = article[choice];
	int i = 0;
	while (*art != '\0')
	{
		result[i] = *art;
		i++;
		art++;
	}
	result[i] = ' ';
	i++;

	choice = (rand() % 5);
	char *non = noun[choice];
	while (*non != '\0')
	{
		result[i] = *non;
		i++;
		non++;
	}
	result[i] = ' ';
	i++;

	choice = (rand() % 5);
	char *ver = verb[choice];
	while (*ver != '\0')
	{
		result[i] = *ver;
		i++;
		ver++;
	}
	result[i] = ' ';
	i++;

	choice = (rand() % 5);
	char *prep = preposition[choice];
	while (*prep != '\0')
	{
		result[i] = *prep;
		i++;
		prep++;
	}
	result[i] = ' ';
	i++;

	choice = (rand() % 5);
	char *art2 = article[choice];
	while (*art2 != '\0')
	{
		result[i] = *art2;
		i++;
		art2++;
	}
	result[i] = ' ';
	i++;

	choice = (rand() % 5);
	char *non2 = noun[choice];
	while (*non2 != '\0')
	{
		result[i] = *non2;
		i++;
		non2++;
	}

	result[0] = toupper(result[0]);
	result[i] = '.';

	printf("%s", result);

}
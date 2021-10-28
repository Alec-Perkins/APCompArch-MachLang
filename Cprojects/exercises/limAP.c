// Exercise 8.12
// A. Perkins

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <time.h>

void makeSentence(char* article[], char* endNoun[], char* middleNoun[], char* verb[], char* preposition[]);

int main()
{
	srand(time(NULL));
	char* article[5] = {"the", "a", "one", "some", "any"};
	char* endNoun[5] = {"crown", "frown", "gown", "clown", "town"};
	char* middleNoun[5] = {"boy", "girl", "dog", "town", "car"};
	char* endNoun2[5] = {"bucket", "mullet", "puppet", "musket", "nugget"};
	char* verb[5] = {"drove", "jumped", "ran", "walked", "skipped"};
	char* preposition[5] = {"to", "from", "over", "under", "on"};

	makeSentence(article, endNoun, middleNoun, verb, preposition);
	puts("");
	makeSentence(article, endNoun, middleNoun, verb, preposition);
	puts("");
	makeSentence(article, endNoun2, middleNoun, verb, preposition);
	puts("");
	makeSentence(article, endNoun2, middleNoun, verb, preposition);
	puts("");
	printf("And ");
	makeSentence(article, endNoun, middleNoun, verb, preposition);

	return 0;
}

void makeSentence(char* article[], char* endNoun[], char* middleNoun[], char* verb[], char* preposition[])
{
	static int sentNum = 0;
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
	char *non = middleNoun[choice];
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
	char *non2 = endNoun[choice];
	while (*non2 != '\0')
	{
		result[i] = *non2;
		i++;
		non2++;
	}

	sentNum++;
	result[0] = toupper(result[0]);

	if (sentNum >= 5)
	{
		result[0] = tolower(result[0]);
	}

	result[i] = '.';


	printf("%s", result);

}
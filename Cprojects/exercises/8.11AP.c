// Exercise 8.11
// A. Perkins

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void makeSentence(char article[], char noun[], char verb[], char preposition[]);

int main()
{
	srand(time(NULL));
	char article[5][5] = {"the", "a", "one", "some", "any"};
	char noun[5][5] = {"boy", "girl", "dog", "town", "car"};
	char verb[5][8] = {"drove", "jumped", "ran", "walked", "skipped"};
	char preposition[5][6] = {"to", "from", "over", "under", "on"};
	
	makeSentence(article, noun, verb, preposition);
}

void makeSentence(char article[], char noun[], char verb[], char preposition[])
{
	char result[100];

	int choice = (rand() % 5);
	char *temp = article[choice];
	int i = 0;
	while (*temp != '\0') {
		result[i] = *temp;
		i++;
		temp++;
	}
	result[i] = " ";
	i++;
	puts(result);

}
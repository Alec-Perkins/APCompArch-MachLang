// Exercise 8.21
// A. Perkins

#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <string.h>
#include <stdlib.h>

#define STRINGNUM 20

void display(char towns[20][20]);

int main()
{
	char towns[STRINGNUM][STRINGNUM] = {"Hanamura", "Black Forest", "Blizzard World", "Temple of Anubis", "Hollywood", "Route 66", "Havana", "Volskaya", "Rialto", "Ilios", "Numbani", "Lijiang", "Dorado", "Eichanwalde", "Kings Row", "Junker Town", "Oasis", "Nepal", "Gibraltar", "Busan"};

	char holder[20];

	for( int townName = 0 ; townName < STRINGNUM ; townName++ )
	{
		for( int letter = townName+1 ; letter < STRINGNUM ; letter++ )
		{
			if(strcmp(towns[townName],towns[letter])>0)
			{
				strcpy(holder,towns[townName]);
				strcpy(towns[townName],towns[letter]);
				strcpy(towns[letter],holder);
			}
		}
	}

	display(towns);

	return 0;
}

void display(char towns[STRINGNUM][STRINGNUM])
{
	puts("");
	for( int townName = 0 ; townName < STRINGNUM ; townName++ ) {
		puts(towns[townName]);
	}
}
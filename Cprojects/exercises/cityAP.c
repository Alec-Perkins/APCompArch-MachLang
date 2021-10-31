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

	for( int i = 0 ; i < STRINGNUM ; i++ ) {
		for( int j = i+1 ; j < STRINGNUM ; j++ ) {
			if(strcmp(towns[i],towns[j])>0){
				strcpy(holder,towns[i]);
				strcpy(towns[i],towns[j]);
				strcpy(towns[j],holder);
			}
		}
	}

	display(towns);

	return 0;
}

void display(char towns[STRINGNUM][STRINGNUM])
{
	puts("");
	for( int i = 0 ; i < STRINGNUM ; i++ ) {
		puts(towns[i]);
	}
}
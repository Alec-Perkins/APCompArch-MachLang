// 5-3 Struct Lab Project
// A. Perkins, E. Matsuda

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX_STR_LEN 100

struct Owner {
	char *name;
	char *city;
	int age;
	int numberOfPets;
	struct Pet *pets;
};

struct Pet {
	char *name;
	char *species;
	char *color;
	double weight;
	int living;
	int age;
};

int addPet(struct Owner *owner, struct Pet *pet);


int main()
{
	// How to set the value of a char* in the struct
	struct Owner ethan;
	char *str = "Ethan";
	ethan.name = malloc(MAX_STR_LEN);
	strcpy(ethan.name, str);
	printf("Ethan's name is: %s\n", ethan.name);

}

int addPet(struct Owner *owner, struct Pet *pet)
{
	if (owner->numberOfPets == 0)
	{
		puts("Owner's first pet!");
	}
	owner->numberOfPets++;
	*(owner -> pets + (owner -> numberOfPets - 1)) = *pet;
	return owner -> numberOfPets - 1;
}




	// How to set the value of a char* in the struct
	// struct Owner ethan;
	// char *str = "Ethan";
	// ethan.name = malloc(MAX_STR_LEN);
	// strcpy(ethan.name, str);
	// printf("Ethan's name is: %s\n", ethan.name);

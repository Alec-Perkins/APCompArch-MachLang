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
void makePet(struct Pet *pet, char *name, char *species, char *color, double weight, int living, int age);
void makeOwner(struct Owner *owner, char *name, char *city, int age, int numberOfPets);


int main()
{
	// How to set the value of a char* in the struct
	struct Owner ethan;
	struct Pet yoshi;
	struct Pet paco;

	makeOwner(&ethan, "Ethan", "Belmont", 17, 0);
	makePet(&yoshi, "Yoshi", "bunny", "white and gray", 5.6, 1, 7);

	printf("%s has %d pets now.\n", ethan.name, (&ethan, &yoshi));
	printf("%s has %d pets now.\n", ethan.name, (&ethan, &paco));
}

void makePet(struct Pet *pet, char *name, char *species, char *color, double weight, int living, int age)
{
	pet -> name = malloc(MAX_STR_LEN);
	strcpy(pet -> name, name);
	pet -> species = malloc(MAX_STR_LEN);
	strcpy(pet -> species, species);
	pet -> color = malloc(MAX_STR_LEN);
	strcpy(pet -> color, color);
	pet -> weight = weight;
	pet -> living = living;
	pet -> age = age;
}

void makeOwner(struct Owner *owner, char *name, char *city, int age, int numberOfPets)
{
	owner -> name = malloc(MAX_STR_LEN);
	strcpy(owner -> name, name);
	owner -> city = malloc(MAX_STR_LEN);
	strcpy(owner -> city, city);
	owner -> age = age;
	// owner -> numberOfPets = numberOfPets;
}

int addPet(struct Owner *owner, struct Pet *pet)
{
	if (owner->numberOfPets == 0)
	{
		puts("Owner's first pet!");
	}
	owner->numberOfPets++;
	*(owner -> pets + (owner -> numberOfPets - 1)) = *pet;
	return owner->numberOfPets;
}




	// How to set the value of a char* in the struct
	// struct Owner ethan;
	// char *str = "Ethan";
	// ethan.name = malloc(MAX_STR_LEN);
	// strcpy(ethan.name, str);
	// printf("Ethan's name is: %s\n", ethan.name);

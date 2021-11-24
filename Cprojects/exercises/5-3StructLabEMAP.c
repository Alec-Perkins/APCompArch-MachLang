// 5-3 Struct Lab Project
// A. Perkins, E. Matsuda

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Max length of malloc string
#define MAX_STR_LEN 100

// New pet struct
struct Pet {
	char *name;
	char *species;
	char *color;
	double weight;
	int living;
	int age;
};

// New owner struct to own multiple pets
struct Owner {
	char *name;
	char *city;
	int age;
	int numberOfPets;
	struct Pet pets[5];
};

// Function prototypes
int addPet(struct Owner *owner, struct Pet pet);
void makePet(struct Pet *pet, char *name, char *species, char *color, double weight, int living, int age);
void makeOwner(struct Owner *owner, char *name, char *city, int age, int numberOfPets);
void printOwner(struct Owner owner);
void printPet(struct Pet pet);


int main()
{
	// Creating first test set of owner and pets
	struct Owner ethan;
	struct Pet yoshi;
	struct Pet paco;

	// Make struct records for first test
	makeOwner(&ethan, "Ethan", "Belmont", 17, 0);
	makePet(&yoshi, "Yoshi", "bunny", "white and gray", 5.6, 1, 7);
	makePet(&paco, "Paco", "cat", "Orange", 10.2, 0, 15);

	// Print output of adding pets to the owner
	puts("");
	printf("%s has %d pets now.\n", ethan.name, addPet(&ethan, yoshi));
	printf("%s has %d pets now.\n", ethan.name, addPet(&ethan, paco));

	// Testing accessing pet information through the pet array in an owner
	puts("");
	printf("%s's first pet, %s, weighs %f pounds.\n", ethan.name, ethan.pets[0].name, ethan.pets[0].weight);

	// Testing print functions for owner and pet
	puts("");
	printOwner(ethan);
	puts("");
	printPet(yoshi);

	// Testing user input
	puts("");
	printf("Input a new owner's first name\n");
	char ownerName[20];
	scanf("%s", ownerName);
	printf("Input the owner's home city\n");
	char ownerCity[20];
	scanf("%s", ownerCity);
	printf("Input the owner's age\n");
	int ownerAge;
	scanf("%d", &ownerAge);

	struct Owner inputOwner;

	makeOwner(&inputOwner, ownerName, ownerCity, ownerAge, 0);

	puts("");
	printf("Input a new pet's first name\n");
	char petName[20];
	scanf("%s", petName);
	printf("Input the pet's species\n");
	char petSpecies[20];
	scanf("%s", petSpecies);
	printf("Input the pet's color\n");
	char petColor[20];
	scanf("%s", petColor);
	printf("Input the pet's weight\n");
	float petWeight;
	scanf("%f", &petWeight);
	printf("Input if the pet is living or not (0 = not, 1 = living)\n");
	int petLiving;
	scanf("%d", &petLiving);
	printf("Input the pet's age\n");
	int petAge;
	scanf("%d", &petAge);

	struct Pet inputPet;

	makePet(&inputPet, petName, petSpecies, petColor, petWeight, petLiving, petAge);

	// Testing adding the input pet to the input owner
	puts("");
	printf("%s has %d pets now.\n", inputOwner.name, addPet(&inputOwner, inputPet));

	// Printing input structs
	puts("");
	printOwner(inputOwner);
	puts("");
	printPet(inputPet);

}

// Create a new pet given all the data for the pet
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

// Make a new owner given all the data excluding the amount of pets b/c they will be added later
void makeOwner(struct Owner *owner, char *name, char *city, int age, int numberOfPets)
{
	owner -> name = malloc(MAX_STR_LEN);
	strcpy(owner -> name, name);
	owner -> city = malloc(MAX_STR_LEN);
	strcpy(owner -> city, city);
	owner -> age = age;
	owner -> numberOfPets = numberOfPets;
}

// Add a pet to an owner and output the number of pets the owner has now
int addPet(struct Owner *owner, struct Pet pet)
{
	if (owner->numberOfPets == 0)
	{
		puts("Owner's first pet!");
	}
	owner->numberOfPets++;
	owner->pets[owner->numberOfPets - 1] = pet;
	return owner->numberOfPets;
}

// Output all information about an owner
void printOwner(struct Owner owner)
{
	printf("Name: %s\n", owner.name);
	printf("City: %s\n", owner.city);
	printf("Age: %d\n", owner.age);
	printf("Number of pets: %d\n", owner.numberOfPets);
	for (int i = 0; i < owner.numberOfPets; i++)
	{
		printf("Pet #%d: %s\n",i+1 , owner.pets[i].name);
	}
}

// Output all information about a pet
void printPet(struct Pet pet)
{
	printf("Name: %s\n", pet.name);
	printf("Species: %s\n", pet.species);
	printf("Color: %s\n", pet.color);
	printf("Weight: %f\n", pet.weight);
	printf("Living (0 = no, 1 = yes): %d\n", pet.living);
	printf("Age: %d\n", pet.age);
}
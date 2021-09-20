//Pig Game
//A. Perkins
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Prototype Functions
int rollDice();
int computerTurn();
int userTurn();

//Global Variables
int goal = 100;

int main()
{
	int userScore, compScore = 0;
	srand(time(NULL));
	printf("Roll the dice:\n");
	while(userScore < goal && compScore < goal)
	{
		userScore += userTurn(compScore, userScore);
		printf("Computer: %d, You: %d\n", compScore, userScore);
		if (userScore > goal || compScore > goal)
		{
			if (compScore >= goal)
			{
				printf("Computer won:\nComputer: %d, You: %d", compScore, userScore);
				return 0;
			}
			printf("You won:\nComputer: %d, You: %d", compScore, userScore);
			return 0;
		}
		compScore += computerTurn(compScore, userScore);
		printf("Computer: %d, You: %d\n", compScore, userScore);
	}
	if (compScore >= goal)
	{
		printf("Computer won:\nComputer: %d, You: %d", compScore, userScore);
		return 0;
	}
	printf("You won:\nComputer: %d, You: %d", compScore, userScore);
	return 0;
}

int rollDice()
{
	int num = (rand() % 6) + 1;
	return num;
}

int computerTurn()
{
	int total = 0;
	int inc;
	int rollAgain = 1;
	while (rollAgain <= 3)
	{
		inc = rollDice();
		if (inc == 1)
		{
			printf("Oops, computer rolled a 1. ");
			printf("Computer gained 0 points.\n");
			total = 0;
			return total;
		}
		total += inc;
		rollAgain = (rand() % 5) + 1;
	}
	printf("Computer gained %d points.\n", total);
	return total;
}

int userTurn()
{
	int rollAgain = 1;
	int total = 0;
	int inc;
	while (rollAgain == 1)
	{
		inc = rollDice();
		if (inc == 1)
		{
			printf("Oops, you rolled a 1. ");
			printf("You gained 0 points.\n");
			total = 0;
			return total;
		}
		total += inc;
		printf("You rolled a %d. Would you like to roll again? (1 for yes, 0 for no)\n", inc);
		scanf("%d", &rollAgain);
	}
	printf("You gained %d points.\n", total);
	return total;
}
//Pig Game
//A. Perkins
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// int rollDice();
// int computerTurn();

int main()
{
    srand(time(NULL));
    int num = (rand() % 5) + 1;
    printf("num: %d", num);
}

// int rollDice()
// {

// }

// int computerTurn()
// {

// }
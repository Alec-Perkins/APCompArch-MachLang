// 5.32 Guess the Number
// A. Perkins
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	char playAgain = 'y';
	int guess;
	srand(time(NULL));
	while ( playAgain != 'n' ) {
		int num = (rand() % 1000) + 1;
		printf("I have a number between 1 and 1000.\nCan you guess my number?\nPlease type your first guess.\n");
		scanf("%d", &guess);
		while (guess != num) {
			if (guess < num) {
				printf("Too low. Try again.\n");
				scanf("%d", &guess);
			} else {
				printf("Too high. Try again.\n");
				scanf("%d", &guess);
			}
		}
		printf("Excellent! You guessed the number!\nWould you like to play again (y or n)?\n");
		while ((getchar()) != '\n');
		playAgain = getchar();
	}
	return 0;
}
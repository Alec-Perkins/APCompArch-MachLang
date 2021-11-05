// Exercise 7.22
// A. Perkins

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Defines the magic number of the length of the square maze as 12
#define MAZELENGTH 12

// Creates an enum for the current direction of the x
enum directions{up, right, down, left};
// Set initial direction of the x as it will always be right for this program
enum directions dir = right;

// Prototype functions:
int findStart(char maze[MAZELENGTH][MAZELENGTH]);
int isWallRight(char maze[MAZELENGTH][MAZELENGTH], int currentRow, int currentCol);
int isWallForward(char maze[MAZELENGTH][MAZELENGTH], int currentRow, int currentCol);
void displayMaze(char maze[MAZELENGTH][MAZELENGTH]);
void progress(char maze[MAZELENGTH][MAZELENGTH], int *pointerRow, int *pointerCol, int currentRow, int currentCol);
void moveForward(char maze[MAZELENGTH][MAZELENGTH], int *pointerRow, int *pointerCol, int currentRow, int currentCol);

int main()
{
	// Create the maze to be tested
	char maze[MAZELENGTH][MAZELENGTH] = {"############",
						"#...#......#",
						"..#.#.####.#",
						"###.#....#.#",
						"#....###.#.#",
						"##.#.#.#.#.#",
						"#........#.#",
						"######.###.#",
						"#......#...#",
						"############"};

	// Display the starting maze
	displayMaze(maze);

	// Tell user how to show the next progression
	puts("Hit enter to see the next progression");

	// Initializes the starting row and column of the x
	int currentRow = findStart(maze);
	int currentCol = 0;

	// Create a while loop to repeat progression until the maze is finished or the user is done
	int step = 1;

	if (getchar() == '\n') {
		printf("Step %d\n", step);
		step++;
		progress(maze, &currentRow, &currentCol, currentRow, currentCol);
	}

	while (currentCol != 11 && currentCol != 0)
	{
		if (getchar() == '\n') {
			printf("Step %d\n", step);
			step++;
			progress(maze, &currentRow, &currentCol, currentRow, currentCol);
		}
	}
	printf("Step %d\n", step);
	printf("Step %d\n", step); // FIZ THIS
	progress(maze, &currentRow, &currentCol, currentRow, currentCol);
	if (currentCol == 11)
	{
		puts("You escaped the maze!");
	}
	else if (currentCol == 0)
	{
		puts("The maze is unsolvable.");
	}


	return 0;
}

// Traverses the maze once with the x and displays the change
void progress(char maze[MAZELENGTH][MAZELENGTH], int *pointerRow, int *pointerCol, int currentRow, int currentCol)
{
	if (isWallRight(maze, currentRow, currentCol))
	{
		if (isWallForward(maze, currentRow, currentCol))
		{
			// Turn left
			dir--;

			// Correct direction out of bounds
			if (dir == -1)
			{
				dir = 3;
			} else if (dir == 4) 
			{
				dir = 0;
			}

			if (isWallForward(maze, currentRow, currentCol))
			{
				// Turn left again to get out of dead end
				dir--;

				// Correct direction out of bounds
				if (dir == -1)
				{
					dir = 3;
				} else if (dir == 4) 
				{
					dir = 0;
				}

				moveForward(maze, pointerRow, pointerCol, currentRow, currentCol);
			}
			else
			{
				moveForward(maze, pointerRow, pointerCol, currentRow, currentCol);
			}
		}
		else
		{
			moveForward(maze, pointerRow, pointerCol, currentRow, currentCol);
		}
	}
	else
	{
		// Turn right
		dir++;
		if (dir == -1 || dir == 4) {dir = 0;}
		moveForward(maze, pointerRow, pointerCol, currentRow, currentCol);
	}

}

// Take a step forward, change the current location, and leave an 'X' behind
void moveForward(char maze[MAZELENGTH][MAZELENGTH], int *pointerRow, int *pointerCol, int currentRow, int currentCol)
{
	switch(dir)
	{
		case 0:
			maze[currentRow][currentCol] = 'X';
			displayMaze(maze);
			*pointerRow = currentRow-1;
			break;
		case 1:
			maze[currentRow][currentCol] = 'X';
			displayMaze(maze);
			*pointerCol = currentCol+1;
			break;
		case 2:
			maze[currentRow][currentCol] = 'X';
			displayMaze(maze);
			*pointerRow = currentRow+1;
			break;
		case 3:
			maze[currentRow][currentCol] = 'X';
			displayMaze(maze);
			*pointerCol = currentCol-1;
			break;
	}
}

// Tests if there is a wall to the "right" of the x considering its facing direction
int isWallRight(char maze[MAZELENGTH][MAZELENGTH], int currentRow, int currentCol)
{
	// Switch to figure out which direction it is facing
	switch(dir)
	{
		case 0:
			if (maze[currentRow][currentCol+1] == '#')
			{
				return 1;
			}
			return 0;
			break;
		case 1:
			if (maze[currentRow+1][currentCol] == '#')
			{
				return 1;
			}
			return 0;
			break;
		case 2:
			if (maze[currentRow][currentCol-1] == '#')
			{
				return 1;
			}
			return 0;
			break;
		case 3:
			if (maze[currentRow-1][currentCol] == '#')
			{
				return 1;
			}
			return 0;
			break;
	}
}

// Tests if there is a wall to the "front" of the x considering its facing direction
int isWallForward(char maze[MAZELENGTH][MAZELENGTH], int currentRow, int currentCol)
{
	// Switch to figure out which direction it is facing
	switch(dir)
	{
		case 0:
			if (maze[currentRow-1][currentCol] == '#')
			{
				return 1;
			}
			return 0;
			break;
		case 1:
			if (maze[currentRow][currentCol+1] == '#')
			{
				return 1;
			}
			return 0;
			break;
		case 2:
			if (maze[currentRow+1][currentCol] == '#')
			{
				return 1;
			}
			return 0;
			break;
		case 3:
			if (maze[currentRow][currentCol-1] == '#')
			{
				return 1;
			}
			return 0;
			break;
	}
}

// Finds the start, on the left hand side of the maze, to enter through
int findStart(char maze[MAZELENGTH][MAZELENGTH])
{
	int row = 0;
	while (maze[row][0] == '#')
	{
		row++;
	}
	return row;
}

// Prints out the whole maze
void displayMaze(char maze[MAZELENGTH][MAZELENGTH])
{
	printf("\n");
	for (int i = 0; i < MAZELENGTH; i++)
	{
		for (int j = 0; j < MAZELENGTH; j++)
		{
			printf("%c ", maze[i][j]);
		}
		printf("\n");
	}
}
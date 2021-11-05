// Exercise 7.22
// A. Perkins

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Creates an enum for the current direction of the x
enum directions{up, right, down, left};

// Prototype functions:
int findStart(char maze[12][12]);

char direction[] = "Right";

int main()
{
	// Create the maze to be tested
	char maze[12][12] = {"############",
						"#...#......#",
						"..#.#.####.#",
						"###.#....#.#",
						"#....###.#..",
						"##.#.#.#.#.#",
						"#........#.#",
						"######.###.#",
						"#......#...#",
						"############"};

	enum directions dir;
	dir = right;
	printf("%d", dir);

	// Initializes the starting row and column of the x
	int startX = 0;
	int startY = findStart(maze);

	//printf("x: %d, y: %d", startX, startY);



	return 0;
}

int isWallRight(char maze[12][12], int currentX, int currentY, int dir)
{
	char rightChar = '';
	switch(dir)
	{
		case 0:
			rightChar = maze[]
	}
}

int findStart(char maze[12][12])
{
	int row = 0;
	while (maze[row][0] == '#')
	{
		row++;
	}
	return row;
}
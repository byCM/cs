#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;

//It will find the exit but takes a while.

// Function prototypes
void printMaze(char maze[][WIDTH], int curx, int cury);
bool validMove(char maze[][WIDTH], bool visited[][WIDTH], int newX, int newY);
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, int direction[][2]);
bool location(char maze[][WIDTH], bool visited[][WIDTH], int& curX, int& curY, int newX, int newY);

// Return true or false if moving to the specified coordinate is valid
// Return false if we have been to this cell already GIVEN
bool validMove(char maze[][WIDTH], bool visited[][WIDTH], int newX, int newY)
{

	// Check for going off the maze edges
	if (newX < 0 || newX >= WIDTH)
		return false;
	if (newY < 0 || newY >= HEIGHT)
		return false;
	// Check if target is a wall
	if (maze[newY][newX] == 'X')
		return false;
	// Check if visited
	if (visited[newY][newX])
		return false;

	return true;
}


bool location(char maze[][WIDTH], bool visited[][WIDTH], int& curX, int& curY, int newX, int newY)
{
	//Sets foundExit to false if found will return true and exit
	bool foundExit = false;

	if (maze[newY][newX] == 'E')
		foundExit = true;

	curX = newX;
	curY = newY;

	visited[curY][curX] = true;

	return foundExit;

}

// Display the maze in ASCII 
void printMaze(char maze[][WIDTH], int curx, int cury)
{
	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
			if ((x == curx) && (y == cury))
				cout << "@";
			else
				cout << maze[y][x];
		}
		cout << endl;
	}
}

// Recursively search from x,y until we find the exit 
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, int direction[][2])
{
	bool foundExit = false;

	if (maze[y][x] == 'E')
		return true;
	visited[y][x] = true;
	if (validMove(maze, visited, x, y - 1))
		foundExit = search(maze, visited, x, y - 1, direction);
	if (!foundExit && (validMove(maze, visited, x, y + 1)))
		foundExit = search(maze, visited, x, y + 1, direction);
	if (!foundExit && (validMove(maze, visited, x - 1, y)))
		foundExit = search(maze, visited, x - 1, y, direction);
	if (!foundExit && (validMove(maze, visited, x + 1, y)))
		foundExit = search(maze, visited, x + 1, y, direction);

	if (foundExit) {
		direction[0][0]++;
		direction[direction[0][0]][0] = x;
		direction[direction[0][0]][1] = y;
		return true;
	}
	return false;
}

int main() {

	char maze[HEIGHT][WIDTH];
	int x = 0;
	int y = 0;

	// 20 by 20
	for (x = 0; x < WIDTH; x++)
		for (y = 0; y < HEIGHT; y++)
			maze[x][y] = ' ';

	/*
	char maze[HEIGHT][WIDTH] = {
		   {'X','X','X','X','X','X','X','X','X','X'},
		   {'X',' ',' ',' ',' ',' ','X',' ',' ','X'},
		   {'X',' ','X',' ',' ',' ','X',' ',' ','X'},
		   {'X',' ','X','X','X',' ','X',' ',' ','X'},
		   {'X',' ',' ',' ','X',' ','X',' ',' ','X'},
		   {'X',' ',' ',' ','X',' ',' ',' ','X','X'},
		   {'X',' ','X','X','X',' ',' ',' ',' ','X'},
		   {'X',' ','X',' ',' ',' ','X',' ',' ','X'},
		   {'X',' ',' ',' ',' ',' ','X',' ','E','X'},
		   {'X','X','X','X','X','X','X','X','X','X'}
	};
	bool visited[HEIGHT][WIDTH];

	int x = 1, y = 1;
	bool foundExit = false;
	*/

	for (x = 0; x < WIDTH; x++) {
		maze[0][x] = 'X';
		maze[x][0] = 'X';
		maze[HEIGHT - 1][x] = 'X';
		maze[x][WIDTH - 1] = 'X';

	}


	srand(time(NULL));

	for (int k = 0; k <= 1 + (324 / 4); k++) {
		x = rand() % HEIGHT;
		y = rand() % WIDTH;

		if (maze[x][y] == ' ')
		{
			maze[x][y] = 'X';
			k++;
		}
	}

	x = 1; y = 1;

	do {
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
	} while (maze[x][y] != ' ');

	srand(time(NULL));
	int m = rand() % HEIGHT - 2;
	int n = rand() % WIDTH - 2;
	int j = rand() % WIDTH;

	maze[x][y] = 'E';
	x = 0; y = 0;

	do {
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
	} while (maze[x][y] != ' ');


	bool visited[HEIGHT][WIDTH];

	// Initialize visited locations to false
	for (int x = 0; x < WIDTH; x++)

		for (int y = 0; y < HEIGHT; y++)

			visited[y][x] = false;

	visited[y][x] = true;


	if (visited[y][x] != -1) {

	}

	int direction[1500][2];
	direction[0][0] = 0;

	/*

	int direction[300][2];
	direction[0][0] = 0;

	cout << direction[0][0] << endl;
	*/

	bool mazeSolved = search(maze, visited, x, y, direction);

	for (int i = direction[0][0]; i > 0; i--) {
		printMaze(maze, direction[1][0], direction[i][1]);
	}


	cout << mazeSolved << endl;
}

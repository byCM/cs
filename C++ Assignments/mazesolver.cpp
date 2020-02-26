#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;

// Function prototypes
void printMaze(char maze[][WIDTH], int curx, int cury);
bool validMove(char maze[][WIDTH], bool visited[][WIDTH],
	int newX, int newY);
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y);


// Return true or false if moving to the specified coordinate is valid
// Return false if we have been to this cell already
bool validMove(char maze[][WIDTH], bool visited[][WIDTH],
	int newX, int newY)
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
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y)
{
	if (maze[y][x] == 'E')
		return true;

	bool foundExit = false;
	visited[y][x] = true;
	if (validMove(maze, visited, x, y - 1))
		foundExit = search(maze, visited, x, y - 1);
	if (!foundExit && (validMove(maze, visited, x, y + 1)))
		foundExit = search(maze, visited, x, y + 1);
	if (!foundExit && (validMove(maze, visited, x - 1, y)))
		foundExit = search(maze, visited, x - 1, y);
	if (!foundExit && (validMove(maze, visited, x + 1, y)))
		foundExit = search(maze, visited, x + 1, y);

	if (foundExit)
	{
		printMaze(maze, x, y);
		cout << endl;
		return true;
	}
	return false;
}


int main()
{
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

	// Initialize visited locations to false
	for (int x = 0; x < WIDTH; x++)
		for (int y = 0; y < HEIGHT; y++)
			visited[y][x] = false;
	visited[y][x] = true;

	search(maze, visited, x, y);
}

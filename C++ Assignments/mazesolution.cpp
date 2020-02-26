#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;

// Function prototypes
void printMaze(char maze[][WIDTH], int curx, int cury);
bool validMove(char maze[][WIDTH], bool visited[][WIDTH], int newX, int newY);
bool move(char maze[][WIDTH], bool visited[][WIDTH], int& curX, int& curY, int newX, int newY);

// Return true or false if moving to the specified coordinate is valid
// Return false if we have been to this cell already
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

// Make the move on the maze to move to a new coordinate
// I passed curX and curY by reference so they are changed to
// the new coordinates. Here we assume the move coordinates are valid.
// This returns true if we move onto the exit, false otherwise.
// Also update the visited array.
bool move(char maze[][WIDTH], bool visited[][WIDTH], int& curX, int& curY, int newX, int newY)
{
	bool foundExit = false;
	if (maze[newY][newX] == 'E') // Check for exit
		foundExit = true;
	curX = newX; // Update location
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
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, int path[][2])
{
	bool foundExit = true;

	if (maze[y][x] == 'E')
		return true;
	visited[y][x] = true;
	if (validMove(maze, visited, x, y - 1))
		foundExit = search(maze, visited, x, y - 1, path);
	if (!foundExit && (validMove(maze, visited, x, y + 1)))
		foundExit = search(maze, visited, x, y + 1, path);
	if (!foundExit && (validMove(maze, visited, x - 1, y)))
		foundExit = search(maze, visited, x - 1, y, path);
	if (!foundExit && (validMove(maze, visited, x + 1, y)))
		foundExit = search(maze, visited, x + 1, y, path);

	if (foundExit) {
		path[0][0]++;//Increase the number of steps
		path[path[0][0]][0] = x;
		path[path[0][0]][1] = y;//Store x and y values
		return true;
	}
	return false;
}

int main() {

	char maze[HEIGHT][WIDTH];
	int x = 0;
	int y = 0;

	//Making the maze
	for (x = 0; x < WIDTH; x++)
		for (y = 0; y < HEIGHT; y++)
			maze[x][y] = ' ';//Clear out the matrix

	for (x = 0; x < WIDTH; x++) {
		maze[0][x] = 'X';//make top wall
		maze[x][0] = 'X';//make left wall
		maze[HEIGHT - 1][x] = 'X';//make bottom wall
		maze[x][WIDTH - 1] = 'X';//Make right wall

	}

	srand(time(NULL));
	int l = 0;//Random variable used for filling with 25% walls
	for (l = 0; l <= 1 + ((WIDTH - 2) * (HEIGHT - 2) / 4); l++) {//Less than 25% of remaining maze
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
		if (maze[x][y] == ' ')//Cell is empty let's fill it and increase l counter
		{
			maze[x][y] = 'X';
			l++;
		}

	}
	//Our maze is now filled, we still need a start and an exit
	x = 0; y = 0;
	while (maze[x][y] != ' ') {//Until we get an empty space keep searching for EXIT
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
	}
	maze[x][y] = 'E';//Empty cell fill it with exit sign
	x = 0; y = 0;

	while (maze[x][y] != ' ') {//Until we get an empty space keep searching for START
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
	}

	//x and y are now assigned random start positions

	//ALL DONE SETTING UP

	bool visited[HEIGHT][WIDTH];

	// Initialize visited locations to false

	for (int x = 0; x < WIDTH; x++)

		for (int y = 0; y < HEIGHT; y++)

			visited[y][x] = false;

	visited[y][x] = true;

	int path[1001][2];//Assuming a MAX of a 1000 steps
	//The path[0][0] will contain the number of steps taken
	path[0][0] = 0;
	//from path[1] it'll contain the steps taken in reverse

	bool foundExit = search(maze, visited, x, y, path);//Store if we found our answer

	for (int i = path[0][0]; i > 0; i--) {//for printing the correct answer
		printMaze(maze, path[1][0], path[i][1]);
	}

	cout << foundExit << endl;
}









#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int WIDTH = 20;
const int HEIGHT = 20;

// Function prototypes
bool validMove(char maze[][WIDTH], bool visited[][WIDTH], int newX, int newY);
bool move(char maze[][WIDTH], bool visited[][WIDTH], int& curX, int& curY, int newX, int newY);
void printMaze(char maze[][WIDTH], int curx, int cury);

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


bool move(char maze[][WIDTH], bool visited[][WIDTH], int& curX, int& curY, int newX, int newY)
{
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
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, int path[][2])
{
	bool foundExit = false;

	if (maze[y][x] == 'E')
		return true;
	visited[y][x] = true;
	if (validMove(maze, visited, x, y - 1))
		foundExit = search(maze, visited, x, y - 1, path);
	if (!foundExit && (validMove(maze, visited, x, y + 1)))
		foundExit = search(maze, visited, x, y + 1, path);
	if (!foundExit && (validMove(maze, visited, x - 1, y)))
		foundExit = search(maze, visited, x - 1, y, path);
	if (!foundExit && (validMove(maze, visited, x + 1, y)))
		foundExit = search(maze, visited, x + 1, y, path);

	if (foundExit) {
		path[0][0]++;
		path[path[0][0]][0] = x;
		path[path[0][0]][1] = y;
		return true;
	}
	return false;
}

int main() {

	char maze[HEIGHT][WIDTH];
	int x = 0;
	int y = 0;

	//Make the maze with the new dimesions 20/20
	for (x = 0; x < WIDTH; x++)
		for (y = 0; y < HEIGHT; y++)
			maze[x][y] = ' ';

	for (x = 0; x < WIDTH; x++) {
		maze[0][x] = 'X';
		maze[x][0] = 'X';
		maze[HEIGHT - 1][x] = 'X';
		maze[x][WIDTH - 1] = 'X';

	}

	//Fills in 25% of the maze. 
	srand(time(NULL));
	int j = 0;
	for (j = 0; j <= 1 + ((WIDTH - 2) * (HEIGHT - 2) / 4); j++) {
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
		if (maze[x][y] == ' ')
		{
			maze[x][y] = 'X';
			j++;
		}

	}

	//Generate the start and the exit
	x = 0; y = 0;
	while (maze[x][y] != ' ') {
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
	}
	maze[x][y] = 'E';
	x = 0; y = 0;

	while (maze[x][y] != ' ') {
		x = rand() % HEIGHT;
		y = rand() % WIDTH;
	}


	bool visited[HEIGHT][WIDTH];
	// Initialize visited locations to false
	for (int x = 0; x < WIDTH; x++)

		for (int y = 0; y < HEIGHT; y++)

			visited[y][x] = false;

	visited[y][x] = true;

	int path[1500][2];
	path[0][0] = 0;

	bool foundExit = search(maze, visited, x, y, path);

	for (int i = path[0][0]; i > 0; i--) {
		printMaze(maze, path[1][0], path[i][1]);
	}

	cout << foundExit << endl;
}

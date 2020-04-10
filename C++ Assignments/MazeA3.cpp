#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

class Maze
{
public:
	Maze()
	{
		const int WIDTH = 20;
		const int HEIGHT = 20;
	}

	void printMaze(char maze[][WIDTH], int curx, int cury)
	{
		for (int y = 0; y < HEIGHT; y++)
		{
			for (int x = 0; x < WIDTH; x++)
			{
				if ((x == curx) && (y == cury)) {
					cout << "@";
				}
				else {
					cout << maze[y][x];
				}

			}
			cout << endl;
		}
	}

	// Return true or false if moving to the specified coordinate is valid
	// Return false if we have been to this cell already
	bool validMove(char maze[][WIDTH], bool visited[][WIDTH], int newX, int newY)
	{
		if (newX < 0 || newX >= WIDTH)
			return false;
		if (newY < 0 || newY >= HEIGHT)
			return false;
		if (maze[newY][newX] == 'X')
			return false;
		if (visited[newY][newX])
			return false;
		return true;
	}

	// Make the move on the maze to move to a new coordinate
	// I passed curX and curY by reference so they are changed to
	// the new coordinates.  Here we assume the move coordinates are valid.
	// This returns true if we move onto the exit, false otherwise.
	// Also update the visited array.
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

	bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, int solutionX[], int solutionY[], int& numEntries)
	{
		bool foundExit;
		if (maze[y][x] == 'E')
			return true;
		visited[y][x] = true;

		if (validMove(maze, visited, x, y - 1))
			foundExit = search(maze, visited, x, y - 1, solutionX, solutionY, numEntries);
		if (!foundExit && (validMove(maze, visited, x, y + 1)))
			foundExit = search(maze, visited, x, y + 1, solutionX, solutionY, numEntries);
		if (!foundExit && (validMove(maze, visited, x - 1, y)))
			foundExit = search(maze, visited, x - 1, solutionX, solutionY, numEntries);
		if (!foundExit && (validMove(maze, visited, x + 1, y)))
			foundExit = search(maze, visited, x + 1, y, solutionX, solutionY, numEntries);
		if (foundExit)
		{
			AddToArrays(solutionX, solutionY, numEntries, x, y);
			return true;
		}

		return false;
	}

	// This new function adds two numbers to the arrays and increments the count of how many
	// numbers have been added. It assumes the arrays have been created big enough to not
	// have overflow. It is used to remember the coordinates of our solution.
	void AddToArrays(int x[], int y[], int& numEntries, int xVal, int yVal)
	{
		x[numEntries] = xVal;
		y[numEntries] = yVal;
		numEntries++;
	}

	int main()
	{
		Maze m;
		char Maze[HEIGHT][WIDTH];
		bool visited[HEIGHT][WIDTH];
		srand(time(NULL));

		for (int x = 0; x < WIDTH; x++) {
			for (int y = 0; y < HEIGHT; y++) {
				Maze[y][x] = ' ';
			}
		}

		for (int x = 0; x < WIDTH; x++)
		{
			Maze[0][x] = 'X';
			Maze[HEIGHT - 1][x] = 'X';
		}

		for (int y = 0; y < HEIGHT; y++)
		{
			Maze[y][0] = 'X';
			Maze[y][WIDTH - 1] = 'X';
		}

		int numcells = static_cast<int>((HEIGHT - 2) * (WIDTH - 2) * 0.25);
		int count = 0;

		while (count < numcells)
		{
			int x = (rand() % (WIDTH - 2)) + 1;
			int y = (rand() % (HEIGHT - 2)) + 1;

			if (Maze[y][x] == ' ')
			{
				Maze[y][x] = 'X';
				count++;
			}
		}

		int x = (rand() % (WIDTH - 2)) + 1;
		int y = (rand() % (HEIGHT - 2)) + 1;


		// At this point, (x,y) contains our start position
		// ***** Pick a random end position that is not a wall *******
		int exitX = (rand() % (WIDTH - 2)) + 1;
		int exitY = (rand() % (HEIGHT - 2)) + 1;

		while (Maze[exitY][exitX] == 'X')
		{
			exitX = (rand() % (WIDTH - 2)) + 1;
			exitY = (rand() % (HEIGHT - 2)) + 1;
		}

		Maze[exitY][exitX] = 'E';

		for (int x = 0; x < WIDTH; x++) {
			for (int y = 0; y < HEIGHT; y++) {
				visited[y][x] = false;
			}
		}

		visited[y][x] = true;

		// Here I created arrays to store the x/y coordinates for the path of our solution.
		// The array is of size [HEIGHT-2]*[WIDTH-2] since we'll never exceed that size.
		// I also made a variable to count how many entries we make..
		// It would probably be more convenient to make a class to store this data rather than
		// have two separate arrays!
		int solutionX[(HEIGHT - 2) * (WIDTH - 2)], solutionY[(HEIGHT - 2) * (WIDTH - 2)];
		int numpoints = 0;

		bool found = Maze.search(Maze, visited, x, y, solutionX, solutionY, numpoints);

		if (!found)
		{
			cout << "No solution found";
		}
		else
		{
			cout << "Solution found! Here is the path from the start." << endl;
			for (int i = numpoints - 1; i >= 0; i--)
			{
				Maze.printmaze(Maze, solutionX[i], solutionY[i]);
				cout << endl;
			}
		}
	}

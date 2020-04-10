//mazeSolver.cpp

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

// ************ Width and Height changed to 20x20  ********************
const int WIDTH = 20;
const int HEIGHT = 20;


void printMaze(char maze[][WIDTH], int curx, int cury);
bool validMove(char maze[][WIDTH], bool visited[][WIDTH],
               int newX, int newY);
bool move(char maze[][WIDTH], bool visited[][WIDTH],
          int &curX, int &curY, int newX, int newY);
bool search(char maze[][WIDTH], bool visited[][WIDTH], int x, int y, 
 	    int solutionX[], int solutionY[], int &numEntries);
void addToArrays(int x[], int y[], int &numEntries, int xVal, int yVal);



void addToArrays(int x[], int y[], int &numEntries, int xVal, int yVal)
{
   x[numEntries] = xVal;
   y[numEntries] = yVal;
   numEntries++;
}

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
 if (maze[newY][newX]=='X')
	return false;
 // Check if visited
 if (visited[newY][newX])
	return false;
 return true;
}

bool move(char maze[][WIDTH], bool visited[][WIDTH],
	  int &curX, int &curY, int newX, int newY)
{
  bool foundExit = false;
  if (maze[newY][newX]=='E') 	// Check for exit
	foundExit = true;
  curX = newX;			// Update location
  curY = newY;
  visited[curY][curX] = true;
 
  return foundExit;
}

void printMaze(char maze[][WIDTH], int curx, int cury)
{
  for (int y=0; y < HEIGHT;y++)
  {
    for (int x=0; x < WIDTH; x++)
    {
	if ((x==curx) && (y==cury))
		cout << "@";
	else
		cout << maze[y][x];
    }
    cout << endl;
  }
}

// Recursively search from x,y until we find the exit
bool search(char maze[][WIDTH], bool visited[][WIDTH], 
            int x, int y,
 	    int solutionX[], int solutionY[], int &numEntries)
{
   bool foundExit;

   if (maze[y][x]=='E')
	return true;
   visited[y][x]=true;
   if (validMove(maze,visited,x,y-1))
	foundExit = search(maze,visited,x,y-1,solutionX,solutionY,numEntries);
   if (!foundExit && (validMove(maze,visited,x,y+1)))
	foundExit = search(maze,visited,x,y+1,solutionX,solutionY,numEntries);
   if (!foundExit && (validMove(maze,visited,x-1,y)))
	foundExit = search(maze,visited,x-1,y,solutionX,solutionY,numEntries);
   if (!foundExit && (validMove(maze,visited,x+1,y)))
	foundExit = search(maze,visited,x+1,y,solutionX,solutionY,numEntries);

   if (foundExit)
   {
	// Remember coordinates we found the exit in the solution arrays
	addToArrays(solutionX, solutionY, numEntries, x, y);	
	return true;
   }
   return false;
}

int main()
{
 char maze[HEIGHT][WIDTH];
 bool visited[HEIGHT][WIDTH];

 // Seed random number generator with clock time
 srand(time(NULL));

 /****************
  Programmatically fill out the maze with ***'s on the borders and spaces in the middle
  ****************/
 // All blank
 for (int x = 0; x < WIDTH; x++)
  for (int y = 0; y < HEIGHT; y++)
	maze[y][x] = ' ';
 // Borders with X
 for (int x = 0; x < WIDTH; x++)
 {
	maze[0][x] = 'X';
	maze[HEIGHT-1][x] = 'X';
 }
 for (int y = 0; y < HEIGHT; y++)
 {
	maze[y][0] = 'X';
	maze[y][WIDTH-1] = 'X';
 }

 // ***** Randomly fill in 25% of the middle
 int numCells = static_cast<int>((HEIGHT-2)*(WIDTH-2)*0.25);
 int count = 0;
 while (count < numCells)
 {
    int x = (rand() % (WIDTH-2)) +1;
    int y = (rand() % (HEIGHT-2)) +1;
    if (maze[y][x]==' ')
    {
	maze[y][x]='X';
	count++;
    }
 }

 // ***** Pick a random start and end that is not a wall *****
 int x = (rand() % (WIDTH-2)) +1;
 int y = (rand() % (HEIGHT-2)) +1;
 while (maze[y][x]=='X')
 {
   x = (rand() % (WIDTH-2)) +1;
   y = (rand() % (HEIGHT-2)) +1;
 }
 // At this point, (x,y) contains our start position
 // ***** Pick a random end position that is not a wall *******
 int exitX = (rand() % (WIDTH-2)) +1;
 int exitY = (rand() % (HEIGHT-2)) +1;
 while (maze[exitY][exitX]=='X')
 {
   exitX = (rand() % (WIDTH-2)) +1;
   exitY = (rand() % (HEIGHT-2)) +1;
 }
 maze[exitY][exitX]='E';

 // Initialize visited locations to false
 for (int x = 0; x < WIDTH; x++)
  for (int y = 0; y < HEIGHT; y++)
        visited[y][x] = false;
 visited[y][x] = true;

	
 int solutionX[(HEIGHT-2)*(WIDTH-2)], solutionY[(HEIGHT-2)*(WIDTH-2)];
 int numPoints = 0;

 bool found = search(maze,visited,x,y,solutionX,solutionY,numPoints);
 if (!found)
	cout << "No solution found.";
 else
 {
	cout << "Solution found!  Here is the path from the start." << endl;
	for (int i = numPoints-1; i >= 0; i--)
	{
		printMaze(maze, solutionX[i], solutionY[i]);
		cout << endl;
 	}
 }
}

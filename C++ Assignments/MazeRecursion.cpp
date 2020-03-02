#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


const int WIDTH = 40;
const int HEIGHT = 40;

//1 and 39
void locate(char maze[][WIDTH]) {

	if (WIDTH <= 2 || HEIGHT <= 2) {
		return;
	}

	//randon x across
	srand(time(NULL));
	int l = 0;
	l = rand() % HEIGHT - 1;

	for (int x = 0; x < WIDTH; x++) {
		maze[l][x] = 'X'; 
		cout << maze[l][x];
	}

	// random hole in location across 
	int q = 0;
	q = rand();
	//maze[l][q] = ' ';




}

void printMaze(char maze[][WIDTH])
{
	locate(maze);

	for (int y = 0; y < HEIGHT; y++)
	{
		for (int x = 0; x < WIDTH; x++)
		{
				cout << maze[y][x];
		}
		cout << endl;
	}



}



int main() {

	char maze[HEIGHT][WIDTH];
	int x = 0;
	int y = 0;

	for (x = 0; x < WIDTH; x++)
		for (y = 0; y < HEIGHT; y++)
			maze[x][y] = ' ';

	for (x = 0; x < WIDTH; x++) {
		maze[0][x] = 'X';//top 
		maze[x][0] = 'X';//left side
		maze[HEIGHT - 1][x] = 'X';//bottom
		maze[x][WIDTH - 1] = 'X';//right side

	}


	printMaze(maze);
}


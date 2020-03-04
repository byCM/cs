#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


const int WIDTH = 40;
const int HEIGHT = 40;

//1 and 39
void locate(char maze[][WIDTH], int upperLeft, int upperRight, int bottomLeft, int bottomRight) {

	if (WIDTH <= 2 || HEIGHT <= 2) {
		return;
	}

	srand(time(NULL));
	//MAIN LOCATION DOWN SIDE
	int l = rand() % (39) + 1;
	//RANDOM LOCATION IN WIDTH
	int q = rand() % (WIDTH - 1) + 1;
	//RANDOM LOCATION IN HEIGHT
	int k = rand() % (HEIGHT - 1) + 1;

	if (maze[10][3] = ' ') {
		maze[10][3] = 'H';
	}

	/*
	for (int x = 1; x < 39; x++) {
		maze[l][x] = 'X';
		maze[l][q] = ' ';
	}
	

	for (int x = l; x < HEIGHT; x++) {
		maze[x][l] = 'X';
		maze[k][l] = ' ';	
	}
	*/

	for (int x = 1; x < 39; x++) {
		maze[3][x] = 'X';
		maze[3][8] = ' ';
	}

	for (int x = 3; x < HEIGHT; x++) {
		maze[x][3] = 'X';
		if (maze[3][8] == ' ') {
			maze[4][3] = ' ';
		}
	}






}


void printMaze(char maze[][WIDTH])
{
	locate(maze, 1, 1, 39, 39);

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

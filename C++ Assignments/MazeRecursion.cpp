#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


const int WIDTH = 40;
const int HEIGHT = 40;

//1 and 39
void locate(char maze[][WIDTH], int upperLeft, int upperRight, int bottomLeft, int bottomRight) {

	srand(time(NULL));
	//MAIN LOCATION DOWN SIDE
	int l = rand() % (39) + 1;
	//RANDOM LOCATION IN WIDTH
	int q = rand() % (WIDTH - 1) + 1;
	//RANDOM LOCATION IN HEIGHT
	int k = rand() % (HEIGHT - 1) + 1;
	int m = rand() % (HEIGHT - 1) + 1;

	if (WIDTH <= 2 || HEIGHT <= 2) {
		return;
	}

	for (int x = 1; x < 39; x++) {
		maze[l][x] = 'X';
		maze[l][q] = ' ';
	}

	if ((HEIGHT - l) > 4) {
		for (int x = 1; x < 39; x++) {
			maze[m][x] = 'X';
			maze[m][q] = ' ';
		}
	}

	//Vertical line top to l
	for (int x = 0; x < l; x++) {
		maze[x][k] = 'X';
	}


	for (int x = l; x < HEIGHT; x++) {
		maze[x][l] = 'X';
		if (maze[x][l - 1] == 'X') {
			maze[38][l] = ' ';
		}
		if (maze[x][l] == ' ') {
			maze[l + 1][l] = ' ';
		}
	}


	
	/*
	for (int x = 1; x < 39; x++) {
		maze[3][x] = 'X';
		maze[3][8] = ' ';
	}

	for (int x = 4; x < HEIGHT; x++) {
		maze[x][8] = 'X';
		if (maze[3][8] == ' ') {
			maze[4][8] = ' ';
		}
		if (maze[39][8] == 'X') {
			maze[38][8] = ' ';
		}
		
	}

	for (int x = 4; x < HEIGHT; x++) {
		maze[x][15] = 'X';
		if (maze[3][8] == ' ') {
			maze[4][8] = ' ';
		}
		if (maze[39][15] == 'X') {
			maze[38][15] = ' ';
		}

	}
	*/




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

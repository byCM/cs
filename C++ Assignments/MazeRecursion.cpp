#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;


const int WIDTH = 40;
const int HEIGHT = 40;


void locate(char maze[][WIDTH]) {
	maze[1][1];
	maze[8][8];

	if (WIDTH <= 2 || HEIGHT <= 2) {
		return;
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
		maze[0][x] = 'X';//TOP
		maze[x][0] = 'X';//LEFT
		maze[HEIGHT - 1][x] = 'X';//BOTTOM
		maze[x][WIDTH - 1] = 'X';//RIGHT

	}

}


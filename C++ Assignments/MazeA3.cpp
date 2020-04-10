#include<iostream>

#include<ctime>

#include<stdlib>

class maze

{

public :

maze()

{

const int WIDTH=20;

const int HEIGHT=20;

}

void print maze(char maze[][WIDTH],int curx,int cury)

{

for(int y=0;y<HEIGHT;y++)

{

for(int x=0;x<WIDTH;x++)

{

if((x==curx)&&(y==cury))

cout<<"@";

else

cout<<maze[y][x];

}

cout<<endl;

}}

bool validMove(char maze[][WIDTH],bool visited[][WIDTH],int newX,int newY)

{

if(newX<0||newX>=WIDTH)

return false;

if(newY<0||newY>=HEIGHT)

return false;

if(maze[newY][newX]=='X')

return false;

if(visited[newY][newX])

return false;

return true;

}

bool move(char maze[][WIDTH],bool visited[][WIDTH],int &curX,int &curY,int newX,int newY)

{

bool foundExit=false;

if(maze[newY][newX]=='E')

foundExit=true;

curX=newX;

curY=newY;

visited[curY][curX]=true;

return foundExit;

}

bool search(char maze[][WIDTH],bool visited[][WIDTH],int x,int y,int solutionX[],int solutionY[],int &numEntries)

{

bool foundExit;

if(maze[y][x]=='E')

return true;

visited[y][x]=true;

if(validMove(maze,visited,x,y-1))

foundExit=search(maze,visited,x,y-1,solutionX,solutionY,numEntries);

if(!foundExit&&(validMove(maze,visited,x,y+1)))

foundExit=search(maze,visited,x,y+1,solutionX,solutionY,numEntries);

if(!foundExit&&(validMove(maze,visited,x-1,y)))

foundExit=search(maze,visited,x-1,solutionX,solutionY,numEntries);

if(!foundExit&&(validMove(maze,visited,x+1,y)))

foundExit=search(maze,visited,x+1,y,solutionX,solutionY,numEntries);

if(foundExit)

{

AddToArrays(solutionX,solutionY,numEntries,x,y);

return true;

}

return false;

}

void AddToArrays(int x[],int y[],int &numEntries,int xVal,int yVal)

{

x[numEntries]=xVal;

y[numEntries]=yVal;

numEntries++;

}

int main()

{

maze m;

char Maze[HEIGHT][WIDTH];

bool visited[HEIGHT][WIDTH];

srand(time(NULL));

for(int x=0;x<WIDTH;x++)

for(int y=0;y<HEIGHT;y++)

Maze[y][x]='';

for(int x=0;x<WIDTH;x++)

{

Maze[0][x]='X';

Maze[HEIGH-1T][x]='X';

}

for(int y=0;y<HEIGHT;y++)

{

Maze[y][0]='X';

Maze[y][WIDTH-1]='X';

}

int numcells=static_cast<int>((HEIGHT-2)*(WIDTH-2)*0.25);

int count=0;

while(count<numcells)

{

int x=(rand()%(WIDTH-2))+1;

int y=(rand()%(HEIGHT-2))+1;

if(Maze[y][x]=='')

{

Maze[y][x]='X';

count++;

}}

int x=(rand()%(WIDTH-2))+1;

int y=(rand()%(HEIGHT-2))+1;

}

int exitX=(rand()%(WIDTH-2))+1;

int exitY=(rand()%(HEIGHT-2))+1;

while(Maze[exitY][exitX]=='X')

{

exitX=(rand()%(WIDTH-2))+1;

exitY=(rand()%(HEIGHT-2))+1;

}

Maze[exitY][exitX]='E';

for(int x=0;x<WIDTH;x++)

for(int y=0;y<HEIGHT;y++)

visited[y][x]=false;

visited[y][x]=true;

int solutionX[(HEIGHT-2)*(WIDTH-2)],solutionY[(HEIGHT-2)*(WIDTH-2)];

int numpoints=0;

boolfound=m.search(Maze,visited,x,y,solutionX,solutionY,numpoints);

if(!found)

{

cout<<"no solution found";

else

{

cout<<solution found!here is the path from the start"<<endl;

for(int i=numpoints-1;i>=0;i--)

{

m.printmaze(Maze,solutionX[i],solutionY[i]);

cout<<endl;

}

}

}

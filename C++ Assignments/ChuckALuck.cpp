#include <iostream>
#include<time.h>
using namespace std;


int main()
{
    // Wager amount
    int wager;

    // Dice Roll
    int n;

    int first, second, third;

    cout << "Please enter your wager:" << endl;
    cin >> wager;

    cout << "Please enter a number from 1-6:" << endl;
    cin >> n;

    srand(time(NULL));
    first = rand() % (6 - 1 + 1) + 1;
    second = (rand() % 6) + 1;
    third = (rand() % 6) + 1;

    cout << "roll " << first << endl;
    cout << "roll " << second << endl;
    cout << "roll " << third << endl;

 
    return 0;
}

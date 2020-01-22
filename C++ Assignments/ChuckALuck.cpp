#include <iostream>
#include<time.h>
using namespace std;


int main()
{
    // Wager amount
    int wager;

    // Dice Roll
    int n;

    int first, second, third, winnings = 0, total = 0;

   

    cout << "Please enter your wager:" << endl;
    cin >> wager;

    while (wager > 100 | wager < 0) {
        cout << "Please enter a wager between 1 and 100:" << endl;
        cin >> wager;
    }

    cout << "Please enter a number from 1-6:" << endl;
    cin >> n;

    while (n > 6 | n < 0) {
        cout << "Please enter a number between 1 and 6:" << endl;
        cin >> n;
    }

    srand(time(NULL));
    first = (rand() % 6) + 1;
    second = (rand() % 6) + 1;
    third = (rand() % 6) + 1;

    if (n == first) {
        total = winnings + wager;
        cout << "You won! Total winnings:" << total << endl;
    }
    else {
        total = winnings - wager;
        cout << "You lost! Total winnings:" << total << endl;
    }

    if (n == second) {
        total = winnings + wager;
        cout << "You won! Total winnings:" << total << endl;
    }
    else {
        total = winnings - wager;
        cout << "You lost! Total winnings:" << total << endl;
    }

    if (n == third) {
        total = winnings + wager;
        cout << "You won! Total winnings:" << total << endl;
    }
    else {
        total = winnings - wager;
        cout << "You lost! Total winnings:" << total << endl;
    }



    cout << "roll " << first << endl;
    cout << "roll " << second << endl;
    cout << "roll " << third << endl;

 
    return 0;
}

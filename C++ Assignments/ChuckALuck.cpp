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

    while (wager < 0 | wager > 100) {
        cout << "Please enter a wager between 1 and 100:" << endl;
        cin >> wager;
    }

    cout << "Please enter a number from 1-6:" << endl;
    cin >> n;

    while (n < 0  | n > 6) {
        cout << "Please enter a number between 1 and 6:" << endl;
        cin >> n;
    }

    srand(time(NULL));
    first = (rand() % 6) + 1;
    second = (rand() % 6) + 1;
    third = (rand() % 6) + 1;

    if (n == first & n == second & n == third) {
        total = wager * 3;
        cout << "All three rolls matched! You won: $" << total << endl;
    }
    else if (n != first & n == second & n == third) {
        total = wager * 2;
        cout << "Two rolls matched! You won: $" << total << endl;
    }
    else if (n == first & n != second & n == third) {
        total = wager * 2;
        cout << "Two rolls matched! You won: $" << total << endl;
    }
    else if (n == first & n == second & n != third) {
        total = wager * 2;
        cout << "Two rolls matched! You won: $" << total << endl;
    }
    else if (n != first & n != second & n == third) {
        total = wager * 1;
        cout << "One roll matched! Your balance: $" << total << endl;
    }
    else if (n == first & n != second & n != third) {
        total = wager * 1;
        cout << "One roll matched! Your balance: $" << total << endl;
    }
    else if (n != first & n == second & n != third) {
        total = wager * 1;
        cout << "One roll matched! Your balance: $" << total << endl;
    }
    else if (n != first & n != second & n != third) {
        total = total - wager;
        cout << "No rolls matched, you lost your wager! Total Losings: $" << total << endl;
    }

   



    cout << "roll " << first << endl;
    cout << "roll " << second << endl;
    cout << "roll " << third << endl;

 
    return 0;
}

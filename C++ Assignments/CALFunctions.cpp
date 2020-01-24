#include <iostream>
#include<time.h>
using namespace std;

int playAgain();


int userChoice() {
    int choice;

    cout << "Would you like to play Again? 1 for Yes or 2 for No" << endl;
    cin >> choice;

    while (choice < 0 | choice > 2) {
        cout << "Please enter 1 for yes or 2 for no" << endl;
        cin >> choice;
    }


    if (choice == 1) {
        playAgain();
    }
    else {
        cout << "Thanks for playing!" << endl;
    }

    return 0;
}


int gameOver() {
    cout << "You lost, Game Over! You have lost your wager!" << endl;
    return 0;
}


int playAgain() {

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

    while (n < 0 | n > 6) {
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
        userChoice();
    }
    else if (n != first & n == second & n == third) {
        total = wager * 2;
        cout << "Two rolls matched! You won: $" << total << endl;
        userChoice();
    }
    else if (n == first & n != second & n == third) {
        total = wager * 2;
        cout << "Two rolls matched! You won: $" << total << endl;
        userChoice();
    }
    else if (n == first & n == second & n != third) {
        total = wager * 2;
        cout << "Two rolls matched! You won: $" << total << endl;
        userChoice();
    }
    else if (n != first & n != second & n == third) {
        total = wager * 1;
        cout << "One roll matched! Your balance: $" << total << endl;
        userChoice();
    }
    else if (n == first & n != second & n != third) {
        total = wager * 1;
        cout << "One roll matched! Your balance: $" << total << endl;
        userChoice();
    }
    else if (n != first & n == second & n != third) {
        total = wager * 1;
        cout << "One roll matched! Your balance: $" << total << endl;
        userChoice();
    }
    else if (n != first & n != second & n != third) {
        total = total - wager;
        gameOver();
        //cout << "No rolls matched, you lost your wager! Total Losings: $" << total << endl;
    }

    return 0;
}


int main()

{
    playAgain();
    return 0;
}




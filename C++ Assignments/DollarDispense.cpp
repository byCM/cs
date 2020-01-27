#include <iostream>
using namespace std;


void value(int n) {
    cout << "Total Dollars to dispense: $" << n << endl;
    int amount = n;
    n = n;
    return;
}

void hundreds(int &hundreds) {
    hundreds = hundreds / 100;
    cout << "$100 bills = " << hundreds << '\n';
}

void fiftys(int& fiftys) {
    fiftys = (fiftys % 100) / 50;
    cout << "$50 bills = " << fiftys << '\n';
}

void twenties(int& twenties) {
    twenties = ((twenties % 100) % 50) / 20;
    cout << "$20 bills = " << twenties << '\n';
}

void tens(int& tens) {
    tens = (((tens % 100) % 50) % 20) / 10;
    cout << "$10 bills = " << tens << '\n';
}

void fives(int& fives) {
    fives = ((((fives % 100) % 50) % 20) % 10) / 5;
    cout << "$5 bills = " << fives << '\n';
}

void twos(int& twos) {
    twos = (((((twos % 100) % 50) % 20) % 10) % 5) / 2;
    cout << "$2 Bills = " << twos << '\n';
}

void ones(int& ones) {
    ones = ((((((ones % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    cout << "$1 Bills = " << ones << '\n';
}


int main()
{
    int n;

    cout << "Please enter a integer 1-999" << endl;
    cin >> n;

    while (n < 1 | n > 999){
        cout << "Please enter a integer 1-999" << endl;
        cin >> n;
    }

    int n2 = n;
    int n3 = n;
    int n4 = n;
    int n5 = n;
    int n6 = n;
    int n7 = n;
    int n8 = n;

    value(n8);
    hundreds(n);
    fiftys(n2);
    twenties(n3);
    tens(n4);
    fives(n5);
    twos(n6);
    ones(n7);

    
    return 0;
}

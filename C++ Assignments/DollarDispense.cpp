#include <iostream>
using namespace std;



void hundreds(int &hundreds) {
    hundreds = hundreds / 100;
    cout << "Hundred bills = " << hundreds << '\n';
}

void fiftys(int& fiftys) {
    fiftys = (fiftys % 100) / 50;
    cout << "50 bills = " << fiftys << '\n';
}

void twenties(int& twenties) {
    twenties = ((twenties % 100) % 50) / 20;
    cout << "20 bills = " << twenties << '\n';
}

void tens(int& tens) {
    tens = (((tens % 100) % 50) % 20) / 10;
    cout << "10 bills = " << tens << '\n';
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
    ones = (((((ones % 100) % 50) % 20) % 10) % 5) % 1;
    cout << "$1 Bills = " << ones << '\n';
}


int main()
{
    int number;


    cout << "Please enter a integer 1-999" << endl;
    cin >> number;

    int n2 = number;
    int n3 = number;
    int n4 = number;
    int n5 = number;
    int n6 = number;
    int n7 = number;


    hundreds(number);
    fiftys(n2);
    twenties(n4);
    tens(n3);
    fives(n5);
    twos(n6);
    ones(n7);



    
    return 0;
}

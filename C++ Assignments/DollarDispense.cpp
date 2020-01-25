#include <iostream>
using namespace std;


void convert() {
    cout << "Hello" << endl;
    return;
}



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


int main()
{
    int number;


    cout << "Please enter a integer 1-999" << endl;
    cin >> number;

    int n2 = number;
    int n3 = number;
    int n4 = number;


    hundreds(number);
    fiftys(n2);
    twenties(n4);
    tens(n3);


    
    return 0;
}

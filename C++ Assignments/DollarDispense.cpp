#include <iostream>
using namespace std;


void convert() {
    cout << "Hello" << endl;
    return;
}



void dollars(int &dollars, int &hundreds, int &fiftys) {
    hundreds = hundreds / 100;
    dollars = dollars % 100;
    cout << "Hundred bills = " << hundreds << '\n';

    fiftys = fiftys;
    cout << "50 bills = " << fiftys << '\n';


}


int main()
{
    int number;

    cout << "Please enter a integer 1-999" << endl;
    cin >> number;


    dollars(number, number, number);
    cout << "Hundred bills = " << number << '\n';


    
    return 0;
}

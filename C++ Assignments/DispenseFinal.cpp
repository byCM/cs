#include <iostream>
using namespace std;

// Including both versions. 

void value(int n, int& hundreds, int& fiftys, int& twenties, int& tens, int& fives, int& twos, int& ones) {
    cout << "Total Dollars to dispense: $" << n << endl;

    n = hundreds / 100;
    cout << "$100 bills = " << n << '\n';

    n = (fiftys % 100) / 50;
    cout << "$50 bills = " << n << '\n';

    n = ((twenties % 100) % 50) / 20;
    cout << "$20 bills = " << n << '\n';

    n = (((tens % 100) % 50) % 20) / 10;
    cout << "$10 bills = " << n << '\n';

    n = ((((fives % 100) % 50) % 20) % 10) / 5;
    cout << "$5 bills = " << n << '\n';

    n = (((((twos % 100) % 50) % 20) % 10) % 5) / 2;
    cout << "$2 Bills = " << n << '\n';

    n = ((((((ones % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    cout << "$1 Bills = " << n << '\n';
}


int main()
{
    int n;

    cout << "Please enter a integer 1-999" << endl;
    cin >> n;

    while (n < 1 | n > 999) {
        cout << "Please enter a integer 1-999" << endl;
        cin >> n;
    }

    int hundreds = n;
    int fiftys = n;
    int twenties = n;
    int tens = n;
    int fives = n;
    int twos = n;
    int ones = n;

    int number = n;
    value(n, hundreds, fiftys, twenties, tens, fives, twos, ones);

    return 0;
}


/*
#include <iostream>
using namespace std;


void value(int n, int& number) {
    cout << "Total Dollars to dispense: $" << n << endl;

    n = number / 100;
    cout << "$100 bills = " << n << '\n';

    n = (number % 100) / 50;
    cout << "$50 bills = " << n << '\n';

    n = ((number % 100) % 50) / 20;
    cout << "$20 bills = " << n << '\n';

    n = (((number % 100) % 50) % 20) / 10;
    cout << "$10 bills = " << n << '\n';

    n = ((((number % 100) % 50) % 20) % 10) / 5;
    cout << "$5 bills = " << n << '\n';

    n = (((((number % 100) % 50) % 20) % 10) % 5) / 2;
    cout << "$2 Bills = " << n << '\n';

    n = ((((((number % 100) % 50) % 20) % 10) % 5) % 2) / 1;
    cout << "$1 Bills = " << n << '\n';
}



int main()
{
    int n;

    cout << "Please enter a integer 1-999" << endl;
    cin >> n;

    while (n < 1 | n > 999) {
        cout << "Please enter a integer 1-999" << endl;
        cin >> n;
    }

    int number = n;
    value(n, number);


    return 0;
}
*/

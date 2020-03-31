#include <iostream>
#include <string>

#include <iostream>
#include <fstream>

using namespace std;
int main()
{
    string s;
    int j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, t = 0;
    char size;

    ofstream myfile;
    myfile.open("test.txt");

    if (myfile.fail()) {
        cout << "Error opening file" << endl;
        exit(1);
    }

    while (myfile.is_open()) {
            

            switch (size) {
            case '1':
                j++;
                break;
            case '2':
                k++;
                break;
            case '3':
                l++;
                break;
            case '4':
                m++;
                break;
            case '5':
                n++;
                break;
            case '6':
                o++;
                break;
            case '7':
                p++;
                break;
            case '8':
                q++;
                break;
            case '9':
                r++;
                break;
            default:
                t++;
                break;
            }
    }

    cout << "Amount of numbers that start with 1: " << j << endl;
    cout << "Amount of numbers that start with 2: " << k << endl;
    cout << "Amount of numbers that start with 3: " << l << endl;
    cout << "Amount of numbers that start with 4: " << m << endl;
    cout << "Amount of numbers that start with 5: " << n << endl;
    cout << "Amount of numbers that start with 6: " << o << endl;
    cout << "Amount of numbers that start with 7: " << p << endl;
    cout << "Amount of numbers that start with 8: " << q << endl;
    cout << "Amount of numbers that start with 9: " << r << endl;


    return 0;
}

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string s;

    int j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, t = 0;
    char size;

    ifstream myfile;

    myfile.open("numbers.txt");

    if (myfile.is_open()) {
        while (getline(cin, s)) {
            cin >> size;

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
        myfile.close();
    }
    else {
        cout << "numbers.txt does not exists!" << endl;
    }
    return 0;
    

}

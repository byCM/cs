#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string s;
    char size = 0;
    int count[10] = {};

    ifstream myfile;

    myfile.open("enrollments.txt");

    if (myfile.is_open()) {
        while (getline(myfile, s)) {
            size = s[0];

            switch (size) {
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
                count[size - '1']++;
                break;
            }
        }
    }
    else {
        cout << "File was not found!" << endl;
    }

    myfile.close();

    for (int i = 0; i < 9; i++) {
        cout << "Numbers that start with " << i + 1 << ": " << count[i] << endl;
    }

    return 0;


}

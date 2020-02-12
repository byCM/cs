#include <iostream>
#include <fstream> 
#include <string>
#include <cstring>
using namespace std;

int main()
{
    string word;
    char cword[13];

    for (int i = 0; i < 40; i++) {
        getline(cin, word);
        cin >> cword;

        cout << "word:" << word << endl;
        cout << "CSTRING:" << cword <<endl;

    }
    
}

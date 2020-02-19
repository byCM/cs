
#include <iostream>

using namespace std;

char code[] = ",vtaNm a_\"dabp!!";


void decrypt(int key)

{
    if (key < 1 || key > 500) {

        cout << "Invalid key! Key should be between 1 to 500\n";

        return;

    }

    int i = 0;

    while (code[i] != '\0') {

        int* p = (int*)(code + i);

        *p -= key;

        i += 4;

    }

    cout << code << endl;

}


int main()

{

    decrypt(491);

}

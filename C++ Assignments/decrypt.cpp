
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






#include <iostream>
#include<time.h>
#include <string>

using namespace std;

char message[] = ",vtaNm a_\"dabp!!";


void decrypt(int key)
{
    if (key < 1 || key > 500) {
        cout << "Enter a key between 1 - 500";
        return;
    }

    int i = 0;

    do {
        int* convert = (int*)(message + i);
        *convert = *convert - key;
        i += 4;
    } while (message[i] != '\0');


    cout << message << endl;

}


int main()

{
    
    for (int i = 0; i < 500; i++) {
        cout << "Test Num: " << i << endl;
    }

    
    



}

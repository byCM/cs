#include <iostream>
#include <math.h>

using namespace std;

void countSet(unsigned long long decimal)
{
    unsigned long long binarynum = 0, temp = 1, num;
    int rem;
    num = decimal;
    int i = 0, set = 0;
    int arr[32];

    while (i < 32)
    {
        rem = decimal % 2;
        decimal /= 2;

        temp *= 10;
        arr[i] = rem;
        i++;
        if (rem == 1)
            set++;
    }

    cout << endl << "Binary Representation: ";
    {
        for (int i = 31; i >= 0; i--)
            cout << arr[i];
    }
    cout << endl << endl << "There are exactly " << set << " bits set in the value " << num;
}


int main()
{
    long long num;

    cout << "Enter a decimal integer value: ";
    cin >> num;

    countSet(num);

    return 0;
}

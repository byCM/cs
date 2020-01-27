#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int j = 0, k = 0, l = 0, m = 0;
    int size = 0;

    for (int i = 0; i < 3295; i++) {
        getline(cin, s);
        size = size % 10;

        switch (size) {
        case 1:
            j++;
            break;
        case 2:
            k++;
            break;
        case 3:
            l++;
            break;
        default:
            m++;
            break;
        }
    }

    cout << "Total 1s: " << j << endl;
    cout << "Total 2s: " << k << endl;
    cout << "Total 3s: " << l << endl;


    return 0;
}

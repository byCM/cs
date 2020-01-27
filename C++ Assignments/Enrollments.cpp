=#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    int j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0, t = 0;
    int size = 0;

    for (int i = 0; i < 3295; i++) {
        getline(cin, s);
        cin >> size;
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
        case 4: 
            m++;
            break;
        case 5:
            n++;
            break;
        case 6:
            o++;
            break;
        case 7:
            p++;
            break;
        case 8:
            q++;
            break;
        case 9:
            r++;
            break;
        default:
            t++;
            break;
        }
    }

    cout << "Total 1s: " << j << endl;
    cout << "Total 2s: " << k << endl;
    cout << "Total 3s: " << l << endl;
    cout << "Total 4s: " << m << endl;
    cout << "Total 5s: " << n << endl;
    cout << "Total 6s: " << o << endl;
    cout << "Total 7s: " << p << endl;
    cout << "Total 8s: " << q << endl;
    cout << "Total 9s: " << r << endl;



    return 0;
}

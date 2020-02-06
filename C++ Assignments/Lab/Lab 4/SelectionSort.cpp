#include <iostream>
using namespace std;

void swap(int& x, int& y);


void selectionSort(int a[], int startIndex, int endIndex)
{
    if (startIndex == endIndex)
        return;

    int indexOfMin = startIndex;

    for (int i = 0; i < startIndex - 1; i++)
    {
        int indexOfMin = startIndex;
        for (int j = i + 1; j < startIndex; j++)
        {
            if (a[j] < a[indexOfMin])
                indexOfMin = j;
        }
        swap(a[i], a[indexOfMin]);
    }
    
    cout << "Sorted: " << *a << endl;

    swap(a[indexOfMin], a[startIndex]);


}

void swap(int &x, int &y){
    int temp = x;
    x = y;
    y = temp;
}



int main()
{
    int a[] = {34, 4, 6, 4, 2, 4, 7, 8, 9, 3};
    selectionSort(a, a[1], a[10]);

    cout << "Sorted: " << a << endl;
}

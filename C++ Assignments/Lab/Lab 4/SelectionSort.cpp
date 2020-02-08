#include <iostream>
using namespace std;

void swap(int& x, int& y);
void selectionSort(int a[], int startIndex, int endIndex);


void selectionSort(int a[], int startIndex, int endIndex)
{
    if (startIndex == endIndex)
        return;

    int indexOfMin = startIndex;

    for (int i = startIndex; i < endIndex; i++)
    {
        if (a[i] < a[indexOfMin]) {
            indexOfMin = i;
            swap(a[indexOfMin], a[startIndex]);
        }
        selectionSort(a, startIndex + 1, endIndex);
    }

}

void swap(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

//int prac = i;
//prac = a[i];


int main()
{
    int a[] = {34, 4, 6, 4, 2, 4, 7, 8, 9, 4};
    selectionSort(a, 0, 10);

    for (int i = 0; i < sizeof(a) / 4; i++) {
        cout << "Sorted: " << a[i] << endl;
    }

}

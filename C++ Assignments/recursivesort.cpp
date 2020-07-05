

#include <iostream>
using namespace std;


bool isSorted(int array[], int n)

{
    if (n == 1)
        return true;
    if (array[n - 1] > array[n - 2])
        return isSorted(array, n - 1);
    return false;
}

int main()
{
    int test1[] = { 1, 2, 3 };
    int test2[] = { 2, 1, 3 };
    cout << isSorted(test1, 3) << endl; // Outputs 1 for true
    cout << isSorted(test2, 3) << endl; // Outputs 0 for false
}




#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char *argv[])
{
    int multiply = 1;
    
    for (int i = 1; i < argc; i++)
    {
        multiply *= atoi(argv[i]);
    }

    cout << multiply << endl;
    return 0;

}


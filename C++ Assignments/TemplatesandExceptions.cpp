#include<iostream>

using namespace std;

//Exception class

class ArrayOutOfRange : exception {
    int index; //to store the index that caused exception
public:
    //constructor taking index that caused the exception
    ArrayOutOfRange(int idx) {
        index = idx;
    }
    //returns a message stating the reason of exception
    const char* what() const throw () {
        return "Array Index Out Of Range Exception";
    }

    //a method defined to display the cause of exception to the console
    void displayCause() {
        cout << "Array Index Out Of Range Exception for index: " << index << endl;
    }
};

//completed CheckedArray class

template <typename T>

class CheckedArray {
public:
    CheckedArray();
    CheckedArray(int size);
    ~CheckedArray();
    T& operator[](int index) throw(ArrayOutOfRange);
    int length();
private:
    T* p;
    int size;
};

template <typename T>

CheckedArray<T>::CheckedArray() : size(10)
{
    p = new T[size];
}

//parameterized constructor implementation

template <typename T>

CheckedArray<T>::CheckedArray(int s) : size(s)
{
    p = new T[size];
}

//destructor implementation

template <typename T>

CheckedArray<T>::~CheckedArray()
{
    //freeing up memory
    delete[] p;
}

template <typename T>

int CheckedArray<T>::length() {
    return size;
}

//[] operator implementation

template <typename T>

T& CheckedArray<T>::operator[](int index) throw(ArrayOutOfRange) {
    //validating index
    if (index < 0 || index >= size) {
        //throwing exeption
        throw ArrayOutOfRange(index);
    }
    //valid index, returning the value at index
    return p[index];
}

int main() {

    //creating a CheckedArray of size 20
    CheckedArray<int> array(20);
    //demonstrating an operation that wont cause an exception
    cout << "Accessing index 5. This should not cause any exception" << endl;
    int i = array[5];
    cout << "No exception is occurred" << endl;


    cout << "Accessing index 25. This should cause an exception" << endl;
    try {
        i = array[25];
        cout << "No exception is occurred" << endl;
    }
    catch (ArrayOutOfRange ex) {
        ex.displayCause();
    }


    return 0;

}

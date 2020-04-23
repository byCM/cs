#include<iostream>
using namespace std;



class ArrayOutOfRange : exception {
    int index; 
public:
    ArrayOutOfRange(int idx) {
        index = idx;
    }

    const char* what() const throw () {
        return "Array Index Out Of Range Exception";
    }


    void displayCause() {
        cout << "Array Index Out Of Range Exception for index: " << index << endl;
    }
};


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


template <typename T>

CheckedArray<T>::CheckedArray(int s) : size(s)
{
    p = new T[size];
}


template <typename T>

CheckedArray<T>::~CheckedArray()
{
    delete[] p;
}

template <typename T>

int CheckedArray<T>::length() {
    return size;
}


template <typename T>

T& CheckedArray<T>::operator[](int index) throw(ArrayOutOfRange) {
    if (index < 0 || index >= size) {
        throw ArrayOutOfRange(index);
    }
    return p[index];
}

int main() {

    CheckedArray<int> array(20);
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

#include "bst.cpp"
#include <iostream>

using namespace std;

int main()
{
    BST<int> bst;
    bst.insert(5);
    bst.insert(3);
    bst.insert(2);
    bst.insert(5);
    bst.insert(7);
    bst.insert(8);

    Node<int>* temp = bst.find(5);
    bst.deleteNode(temp);
    temp = bst.find(7);
    bst.deleteNode(temp);
    temp = bst.find(5);
    bst.deleteNode(temp);

    cout << "Traversing tree in-order" << endl;
    bst.traverse();
    cout << endl;

    if (!bst.checkBST(bst)) {
        cout << "in";
    }
    cout << "valid" << endl;

    temp = bst.find(2);
    temp->setItem(20);

    if (!bst.checkBST(bst)) {
        cout << "in";
    }
    cout << "valid" << endl;

    BST<int> bst2;
    bst2.insert(7);
    bst2.insert(5);
    bst2.insert(9);
    bst2.insert(1);
    bst2.insert(6);

    temp = bst2.find(6);
    temp->setItem(99);
    if (!bst.checkBST(bst2)) {
        cout << "in";
    }
    cout << "valid" << endl;
    // return is the end of the program so before here
    return 0;


}




#pragma once
#include <iostream>
using namespace std;

template<class T>
class Node
{
 public:
  Node();
  Node(T item);
  ~Node();
  T& getItem();
  void setNext(Node *next);
  Node<T>* getNext();
 private:
  T item;
  Node<T>* next;
};


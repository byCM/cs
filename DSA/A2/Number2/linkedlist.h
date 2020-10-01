#pragma once

#include <iostream>
#include "node.cpp"
using namespace std;

template<class T>
class LinkedList
{
 public:
   LinkedList();
   ~LinkedList();
   void insert(T item);
   Node<T>* find(T item);
   void print();
   Node<T>* getHead();
 private:
   Node<T> *head;
};

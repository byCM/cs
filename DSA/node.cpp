#include <iostream>
#include "node.h"

template<class T>
Node<T>::Node()
{
}

template<class T>
Node<T>::Node(T item) : item(item)
{
}

template<class T>
Node<T>::~Node()
{
}

template<class T>
Node<T>* Node<T>::getNext()
{
  return next;
}

template<class T>
void Node<T>::setNext(Node *n)
{
  next = n;
}

template<class T>
T& Node<T>::getItem()
{
  return item;
}


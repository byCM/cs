#include <iostream>
#include "linkedlist.h"
#include "term.h"
using namespace std;

template<class T>
LinkedList<T>::LinkedList() : head(nullptr)
{
}

template<class T>
LinkedList<T>::~LinkedList()
{
   Node<T> *temp = head;
   while (head != nullptr)
   {
   	temp = head;
	head = head->getNext();
 	delete temp;
   } 
}

template<class T>
void LinkedList<T>::insert(T item)
{
 Node<T> *node = new Node<T>(item);
 node->setNext(head);
 head = node;
}

template<class T>
Node<T>* LinkedList<T>::find(T item)
{
   Node<T> *temp = head;
   while (temp != nullptr)
   {
	if (temp->getItem() == item)
		return temp;
	temp = temp->getNext();
   } 
   return nullptr;
}

template<class T>
void LinkedList<T>::print()
{
   Node<T> *temp = head;
   cout << endl;
   while (temp != nullptr)
   {
	cout << temp->getItem() << endl;
	temp = temp->getNext();
   }
   cout << endl;
}

template<class T>
Node<T>* LinkedList<T>::getHead()
{
  return head;
}


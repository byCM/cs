#include <iostream>
#include "bst.h"
using namespace std;

template<class T>
BST<T>::BST() : root(nullptr)
{
}

template<class T>
BST<T>::~BST() 
{
  // This would be a good place to delete the nodes in the tree
	while (root != nullptr) {
		deleteNode(root);
	}
}

// Inserts a new node at the front of the list
template<class T>
void BST<T>::insert(T item)
{
 // First search for the insertion point
 Node<T> *y = nullptr;
 Node<T> *x = root;
 while (x != nullptr)
 { 
	y = x;  // Remember previous node
	// Update x to a child pointer
	if (item < x->getItem())
		x = x->getLeft();	
	else
		x = x->getRight();
 }
 // At this point, y points to the node where we should
 // insert the new node. 
 // Create a new node with the insertion value
 Node<T> *newNode = new Node<T>(item);
 newNode->setParent(y);  // Set parent to Y
 if (y==nullptr)
 {
	root = newNode;  // First node
 }
 else
 {
	// Set new node as left or right child of y
	if (item < y->getItem())
		y->setLeft(newNode);
	else
		y->setRight(newNode);
 }
}

template<class T>
Node<T>* BST<T>::find(T item)
{
   if (root == nullptr)
	return nullptr;
   return treeSearch(root, item);
}

template<class T>
Node<T>* BST<T>::treeSearch(Node<T> *p, T item)
{
 if (p == nullptr)
	return nullptr;
 if (p->getItem() == item)
	return p;
 if (item < p->getItem())
	return treeSearch(p->getLeft(), item);
 else
	return treeSearch(p->getRight(), item);
}

template<class T>
void BST<T>::traverse()
{
 inOrder(root);
}

template<class T>
void BST<T>::inOrder(Node<T> *p)
{
  if (p != nullptr)
  {
	inOrder(p->getLeft());
	cout << p->getItem() << endl;
	inOrder(p->getRight());
  }
}


template<class T>
Node<T>* BST<T>::successor(Node<T> *p)
{
  if (p->getRight() != nullptr)
  {
	p = p->getRight();
	while (p->getLeft() != nullptr)
	{
		p = p->getLeft();
	}
	return p;
  }
  else
  {
	Node<T>* parent = p->getParent();
	while ((parent != nullptr) && (p == parent->getRight()))
	{
		p = parent;
		parent = parent->getParent();
	}
	return parent;
  }
}

template<class T>
void BST<T>::deleteNode(Node<T> *z)
{
  if (z->getLeft() == nullptr)
	transplant(z, z->getRight());
  else if (z->getRight() == nullptr)
	transplant(z, z->getLeft());
  else
  {
	Node<T> *y;
	// Find y as the minimum in z's right subtree
	y = z->getRight();
	while (y->getLeft() != nullptr)
	{
		y = y->getLeft();
	}
	// Y's right subtree to Z's right subtree
	if (y->getParent() != z)
	{
		transplant(y, y->getRight());
		y->setRight(z->getRight());
		y->getRight()->setParent(y);
	}
  	// Swap y and z and y's left subtree to z's left subtree
	transplant(z, y);
	y->setLeft(z->getLeft());
	y->getLeft()->setParent(y);
  }
}

template<class T>
void BST<T>::transplant(Node<T> *u, Node<T> *v)
{
  if (u->getParent() == nullptr)
	root = v;
  else if (u == u->getParent()->getLeft())
	u->getParent()->setLeft(v);
  else
	u->getParent()->setRight(v);
  if (v != nullptr)
	v->setParent(u->getParent());
}


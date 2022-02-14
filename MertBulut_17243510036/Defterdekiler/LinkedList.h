#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
#include <cassert>
using namespace std;

template <class T>
struct Node
{
	T info;
	Node<T> *link;
};

template <class T>
class LinkedList
{
	protected:
		Node <T> *head, *last;
		int count;
	public:
		LinkedList ();
		~LinkedList ();
		bool isEmpty();
		int length();
		T back ();
		T front ();
		void destroyList ();
		Node <T>* search (T&);
		void insertFirst (T&);
		void insertLast (T&);
		void deleteNode (T&);
		friend ostream & operator << (ostream &os, LinkedList <T> &list)
		{
			Node <T> *p = list.head;
			while (p != NULL)
			{
				os << p -> info << " ";
				p = p -> link;
				return os;
			}
		}
};

//constructor
template <class T>
LinkedList <T> :: LinkedList()
{
	head = last = NULL;
	count = 0 ;
}

//empty list
template <class T>
bool LinkedList <T> :: isEmpty()
{
	return (head == NULL);
}

//length
template <class T>
int LinkedList <T> :: length()
{
	return count;
}

//search
template <class T>
Node <T>* LinkedList <T> :: search (T& item)
{
	Node <T> *p = head;
	bool found = false;
	while ((p != NULL) && !found)
	{
		if (p -> info == item)
			found = true;
		else
			p = p -> link;
	}
	return p;
}

// insert at first position
template <class T>
void LinkedList <T> :: insertFirst (T& item)
{
	Node <T> *p = new Node <T>;
	p -> info = item;
	head = p;
	if (last == NULL)
		last = p;
	count++;
}

//insert at last position
template <class T>
void LinkedList <T> :: insertLast (T& item)
{
	Node <T> *p = new Node <T>;
	p -> info = item;
	p -> link = NULL;
	
	if (head != NULL)		// there is at least one node in the LL
	{
		last -> link = p;
		last = p;
	}
	
	else		// LL is empty
		head = last = p;
	
	count++;
}

//Destroy List
template <class T>
void LinkedList <T> :: destroyList()
{
	Node <T> *p;
	
	while (head != NULL)
	{
		p = head;
		head = head -> link;
		delete p;
	}
	
	count = 0;
	last = NULL;
}

// Destructor
template <class T>
LinkedList <T> :: ~LinkedList()
{
	destroyList();
}

//First Element
template <class T>
T LinkedList <T> :: front ()
{
	assert (head != NULL);
	return head -> info;
}

//Last Element
template <class T>
T LinkedList <T> :: back ()
{
	assert (!isEmpty());
	return last -> info;
}


//Delete a node containing item
template <class T>
void LinkedList <T> :: deleteNode (T& item)
{
	Node <T> *p, *q;
	bool found = false;
	
	if (head == NULL)
		cerr << "List is empty\n";
	
	else
	{
		if (head -> info == item)
		{
			p = head;
			head = head -> link;
			delete p;
			count--;
			if (head == NULL)
				last = NULL;
		}
		
		else
		{
			p = head;
			q = head -> link;
			while (q != NULL && !found)
			{
				if (q -> info == item)
					found = true;
				else
				{
					p = q;
					q = q -> link;
				}
			}
			
			if (found)
			{
				p -> link = q -> link;
				count --;
				if (last == q)
					last = p;
				delete q;
			}
		}
	}
}
#endif

#ifndef LinkedStack_h
#define LinkedStack_h

#include <iostream>
#include <cassert>
using namespace std;
template <class T>
struct node
{
	T info;
	node <T> *link;
};

template <class T>
class LinkedStack
{
	node<T> *top;
	public:
		//Constructor, sets top initial value whic is null
		LinkedStack()
		{
			top = NULL;
		}
		
		//Destructor, Calls the destroy functions
		~LinkedStack()
		{
			destroy();
		}
		
		//check if linkedstack is empty or not
		bool isEmpty()
		{
			return (top == NULL);
		}
		
		T showTop()
		{
			assert(!isEmpty());    // if it is not true than program quit
			return top -> info;
		}
		
		//Returns the value of the top and deletes it
		T pop();
		
		//Inserts a new value to the top of the stack
		void push(T&);
		
		//Deletes all the nodes in the stack, so that it will be empty
		void destroy();
};

template <class T>
void LinkedStack<T>::destroy()
{
	node <T> *temp;
	while (top != NULL)
	{
		temp = top;
		top = top -> link;
		delete temp;
	}
}

template <class T>
void LinkedStack<T>::push(T& item)
{
	node <T> *newnode = new node <T>;
	newnode -> info = item;
	newnode -> link = top;
	top = newnode;
}

template <class T>
T LinkedStack<T>::pop()
{
	assert(!isEmpty());
	
	node <T> *p;
	T item;
	p = top;
	top = top -> link;
	item = p -> info;
	delete p;
	return item;
}




















#endif

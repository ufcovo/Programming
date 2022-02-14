/*
LÝnked Implementation of Queues
*/
#ifndef NODE_H
#define NODE_H
template <class T>
struct node
{
	T info;
	node <T> *link;
};
#endif

#ifndef LINKEDQUEUE_H
#define LINKEDQUEUE_H

#include <iostream>
#include <cassert>

using namespace std;


template <class T>
class LinkedQueue
{
	node <T> *front, *rear; // similar to head and last in L.L.
	public:
		//Constructor: initializes the front and rear pointers to NULL
		LinkedQueue ()
		{
			front = rear = NULL;	
		}
		
		//Destructor: deleted the manually alllocated spaces inthe memory
		~LinkedQueue ()
		{
			destroyQueue();
		}
		
		//Deletes the entire queue from the memory
		void destroyQueue ();
		
		bool isEmpty ()
		{
			return front == NULL;	
		}
		
		//Displays the content of the front item but does not deletem it from the queue
		T showFront()
		{
			assert (!isEmpty());
			return front -> info;
		}
		
		//Displays the content of the rear/last item but does not deletem it from the queue
		T showRear()
		{
			assert (!isEmpty());
			return rear -> info;
		}
		
		//Inserts the item at the end of the queue
		void insertQueue (T&);
		
		//Deletes the front item from the queue and returns its value
		T deleteQueue();		
};

template <class T>
void LinkedQueue <T> :: destroyQueue()
{
	node <T> *temp;
	while (front != NULL)
	{
		temp = front;
		front = front -> link;
		delete temp;
	}
	rear = NULL;
}

template <class T>
void LinkedQueue <T> :: insertQueue(T& item)
{
	node <T> *p = new node <T>;
	p -> info = item;
	p -> link = NULL;

	if (isEmpty())
		front = rear = p;
	else
	{
		rear -> link = p;
		rear = p;
	}
}

template <class T>
T LinkedQueue <T> :: deleteQueue()
{
	node <T> *p;
	assert (!isEmpty());
	T temp;
	p = front;
	temp = p -> info;
	front = front -> link;
	delete p;
	if (isEmpty())
		rear = NULL;
	return temp;	
}

#endif

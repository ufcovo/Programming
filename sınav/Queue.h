#ifndef Queue_h
#define Queue_h

#include <iostream>
#include <cassert>

using namespace std;

template <class T>
class Queue
{
	int max; // Hold the max size of the queue
	int count; // hold current number of items in the queue
	
	int front, rear; //Hold the front and rear indices on the array
	T *list; // Pointer to create the dynamic array that will hold all elements

	public:
		//Constructor: Sets the initial values of the variables, sþze 100 by default
		Queue (int = 100);
		
		//Destructor: Deletes the entirety of the arrat from the memory
		~Queue ()
		{
			delete []list;
		}
		
		// Checks whether the queue is empty or not
		bool isEmpty ()
		{
			return count == 0;
		}
		
		//Checks whether the queue is full or not
		bool isFull ()
		{
			return count == max;
		}
		
		//Sets the queue to its initial state
		void destroyQueue (); //Reset Queue
		
		//Returns the element that is in the very front of the queue
		T showFront ();
		
		//Returns the element that is in the end/rear of the queue
		T showRear ();
		
		//Inserts an element to the end of the queue if it is not full
		void insertQueue (T&);	//insert, push, enqueue, add
		
		//Deletes an element from the begining/front of tge queue and returns its value
		T deleteQueue (); // delete, serve, remove, dequeue, pop
		
		// Returns the count value
		int getCount ()
		{
			return count;		
		}		
};

template <class T>
Queue <T> :: Queue (int size)
{
	max = size;
	list = new T [max];
	count = 0;
	front = 0;
	rear = max - 1;
}

template <class T>
void Queue <T> :: destroyQueue ()
{
	count = front = 0;
	rear = max - 1;
}

template <class T>
T Queue <T> :: showFront ()
{
	assert (!isEmpty());
	return list [front];
}

template <class T>
T Queue <T> :: showRear ()
{
	assert (!isEmpty());
	return list [rear];
}

template <class T>
void Queue <T> :: insertQueue (T &item)
{
	if (!isFull())
	{
		rear = (rear + 1) % max;
		list [rear] = item;
		count++;
	}
	else
		cerr << "No space left in queue!" << endl;
}

template <class T>
T Queue <T> :: deleteQueue ()
{
	assert (!isEmpty());
	
	T temp;
	temp = list [front];
	front = (front + 1) % max;
	count--;
	return temp;
}
#endif

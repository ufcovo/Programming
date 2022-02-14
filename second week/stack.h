#ifndef	STACK_H
#define STACK_H

#include <iostream>
#include <cassert>
using namespace std;
template <class T>
class Stack
{
	T *arr;
	int top;		//top pozþyþon of the arr
	int size;		//size of the arr
	public:
		Stack(int = 100);
		bool isEmpty();
		bool isFull();
		void destroy();
		void push(T&);
		T pop();
		T showTop();
		~Stack();
};

//Stack Constructor, initializes the variables
template <class T>
Stack<T>::Stack(int stackSize)
{
	size = stackSize;
	top = 0;	//shows the index that is actual top + 1
	arr = new T[size];
}

//stacks destructor, frees up the array memory space
template <class T>
Stack<T>::~Stack()
{
	delete [] arr;
}

//Checks whether the stack is empty or not
template <class T>
bool Stack<T>::isEmpty()
{
	return (top == 0);	
}

//Checks whether the stack(array) is full or not
template <class T>
bool Stack<T>::isFull()
{
	return (top == size);
}

//Destroy method makes the stack become in its initial state
template <class T>
void Stack<T>::destroy()
{
	top = 0;
}

//Inserts a new item of T type to the top of the stack
template <class T>
void Stack<T>::push(T& item)
{
	if (!isFull())
		arr[top++] = item; // arr[top] = item;  top = top+1;

	else
		cerr << "Stack is full." << endl;
}
//Removes the top most item from the stack and returns its value
template <class T>
T Stack<T>::pop()
{
	assert(!isEmpty());
	return arr[--top];	//return arrays top - 1 and changes the value of top permanently	
}

//Displays the values of the top elements, does not change the stack at all
template <class T>
T Stack<T>::showTop()
{
	assert(!isEmpty());
	return arr[top-1];
}

#endif



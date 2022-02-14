/*
Problem: A palindrome is a string of characters that readsd the same forwards and backwards.
(e.g: KAZAK, ATA, MUM)
Write a program that reads a string into a queue and a stack, and determines whether
it is palindrome or not.
*/

#include <iostream>
#include "LinkedStack.h"
#include "LinkedQueue.h"

int main()
{
	LinkedStack <char> stack;
	LinkedQueue <char> queue;
	
	char ch;
	cin.get(ch);
	while (ch != '\n')
	{
		stack.push(ch);
		queue.insertQueue(ch);
		cin.get(ch);
	}
	bool same = true;
	while (same && !stack.isEmpty())
	{
		if (stack.pop() != queue.deleteQueue())
			same = false;
	}
	
	if (same)	
		cout << "The string is palindrome." << endl;
	else
		cout << "The string is not palindrome." << endl;
}

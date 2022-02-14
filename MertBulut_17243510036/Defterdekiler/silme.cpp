#include <iostream>
#include "LinkedList.h"

int main()
{
	LinkedList <int> list;
	int num;
	
	cout << "Enter numbers ending with -99: ";
	cin >> num;
	
	while (num != -99)
	{
		list.insertLast(num);
		cin >> num;
	}
	
	cout << "Enter the number to be deletede: ";
	cin >> num;
	list.deleteNode (num);
	cout << "LinkedList " << list;
}

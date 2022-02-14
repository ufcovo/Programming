/*
input an integer n, then input n integers, output them in reverse order.
using stacks

input:
4
2 3 5 1

output:
1 5 3 2
*/

#include <iostream>
#include "stack.h"

int main()
{
	Stack <int> numbers(50);
	int n, x;
	cout << "How many numbers (0-50): ";
	cin >> n;
	
	cout << "Enter the number:" << endl;
	for(int i = 0; i < n; i++)
	{
		cin >> x;
		numbers.push(x);
	}
	
	while (!numbers.isEmpty())
	{
		cout << numbers.pop() << " ";
	}
	
	return 0;
}

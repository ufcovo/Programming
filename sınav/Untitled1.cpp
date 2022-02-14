#include <iostream>
#include "Queue.h"

int main()
{
	Queue <int> q;
	int bread;
	
	for (int i = 1; i <= 5; ++i)
	{
		cout << "How many breads do you want Person " << i << ": " << endl;
		cin >> bread;
	}
}

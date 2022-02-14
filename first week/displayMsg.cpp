#include <iostream>
using namespace std;

void displayMsg (int n)
{
//	cout << n << " ";
	if (n > 0)
		displayMsg(n - 1);	//Recursive call
	cout << n << " ";
}


int main()
{
	displayMsg(4);
}

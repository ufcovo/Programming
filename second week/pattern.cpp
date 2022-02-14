#include <iostream>
using namespace std;

int pattern (int n)
{
	if (n > 0)
	{
		for (int i=0; i < n; i++)
			cout << '*';
		cout << endl;
		
		pattern (n - 1);
		
		for (int i=0; i < n; i++)
			cout << '*';
		cout << endl;
	}
}

int main()
{
	pattern(4);
}

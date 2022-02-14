#include <iostream>
using namespace std;

void guess (int &n)
{
	if (n > 0)
	{
		cout << n;
		n--;
		guess(n);
		cout << endl << n;
	}
}

int main()
{
	int n=3;
	guess(n);
}
/*
void guess (int n)				//aralarýndaki farka bak!
{
	if (n > 0)
	{
		cout << n;
		n--;
		guess(n);
		cout << endl << n;
	}
}

int main()
{
	guess(3);
}
*/

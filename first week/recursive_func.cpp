#include <iostream>
using namespace std;

void fun(int n)
{
	if (n > 10)
		fun(n / 4);
	else if (n % 2 == 0)
	{
		cout << n << endl;
		fun (n - 1);
	}
	else if (n > 0)
	{
		fun (n - 1);  // This point (Recursive call is made)
		cout << n << endl;	
	}
	
}
int main()
{
	fun(12);
}

#include <iostream>
using namespace std;

void fun(int n)
{
	if (n>0)
		if (n%2==1)	
			fun(n-2);
		else 
		fun(n-1);
	cout <<n;
}

int main()
{
	fun(4);
}

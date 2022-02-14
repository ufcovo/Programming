/*
Fibonacci series
1 1 2 3 5 8 13 21 ...
1 2 3 4 5 6 7  8   th fib numbers where

if n=0 result 0
if n=1 res 1
if n >= result fin(n-2) + fib (n-1)
*/

#include <iostream>
using namespace std;

int fib(int n)
{
	if (n == 0)
		return 0;
	else if (n == 1)
		return 1;
	else
		return fib (n - 2) + fib (n - 1);
}

int main()
{
	int f = fib(8);
	cout << f << endl;
}


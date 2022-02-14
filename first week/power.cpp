/*
power
a ^ n = a * a * a * a .... n times
for example 2 ^ 3 = 2 * 2 * 2 = 8 

Base: n = 0 -> 1,   n = 1 -> a
General: n > 0 -> a * a ^ (n -1)
*/

#include <iostream>
using namespace std;

int power (int a, int n)
{
	if (n == 0)			// Base
		return 1;
	else
		return a * power (a, n-1);		//General
}

int main()
{
	cout << power (2,3) << endl;
}



/*
125 
50 tl
10 tl
1 tl
*/

#include <iostream>
using namespace std;

int atm (int money)
{
	if (money >= 50)
	{
		cout << "50 TL ";
		atm(money - 50);
	}
	else if (money >= 10)
	{
		cout << "10 TL ";
		atm(money - 10);
	}
	else if (money >= 1)
	{
		cout << "1 TL ";
		atm(money - 1);
	}
}
int main()
{
	atm(95);
}

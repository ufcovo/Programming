#include <iostream>
using namespace std;

// 10luk sistem altýnda çalýþýyor 16lýkta çalýþmasý için a yý b yi göstermek gerekiyor!

void decToBase (int num, int base)
{
	if (num > 0)
	{
		decToBase(num / base, base);
		cout << num % base;
	}
}

int main()
{
	decToBase(32, 2);
}

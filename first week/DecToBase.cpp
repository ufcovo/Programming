#include <iostream>
using namespace std;

// 10luk sistem alt�nda �al���yor 16l�kta �al��mas� i�in a y� b yi g�stermek gerekiyor!

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

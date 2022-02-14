#include <iostream>
using namespace std;

/*
ind 0 1 2 3    where we are?
arr 1 2 5 3
size = 4
*/

int maximum (int arr[], int index, int size)
{
	int max;
	if (index == size - 1)		//Base Case
		return arr[index];
	else						// General Case
	{
		max = maximum(arr, index + 1, size);
		if (arr[index] > max)
			return arr[index];
		else
			return max;
	}
}
int main()
{
	int arr[] = {1, 43, 6 , 300, 8, 9, 12};
	int res = maximum(arr, 4, 7);
	cout << res << endl;
	
}

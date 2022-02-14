#include <iostream>
using namespace std;

//Recursive functions, calls itself
int fact (int num)
{
	//Base Case (Stopping Case)
	if (num == 0)
		return 1;
	//General Case (Recursive Case)
	else
		return num * fact (num -1);
}

int main()
{
	int result = fact (5);
	cout << "Result: " << result << endl;
}


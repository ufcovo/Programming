/*
Write a recursive function called mult() that uses only addition to multiply
2 integers and return the result
x, y
x * y = x + x + x + x + .... y times
for example 5 * 4 = 5 + 5 + 5 + 5

if one of number is negative;
5 * (-4)
- ( 5 * 4)  this is how to solve 
*/

#include <iostream>
using namespace std;

int mult (int x, int y)
{
	if (y < 0) 			    // Fix the y being negative
		return - (mult (x, -y) );
		
	else if (x < 0)		   // Fix the x being negative
		return - (mult (-x, y) ); 
			
	else if (y == 0) 	   // Base case 1
		return 0;	
		
	else if (y == 1)  	  // Base case 2
		return x;
		
	else 
		return x + mult (x, y-1);	// General Case
}

int main()
{
	cout << mult(5,4) << endl;
}


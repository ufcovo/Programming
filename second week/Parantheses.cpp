/*
Input a mathematical expression and check if the parantheses are nested correctly
using stack

e.g:
((x - y))  		-> incorrect
x * y)			-> incorrect
) x + y ) - z	-> incorrect
((3 + ( x * y) / z ) * 5 ) 		-> correct 

( x+ ) y   is also true
*/

#include <iostream>
#include <string>
#include "stack.h"

int main()
{
	Stack <char> par;   //parantheses
	bool valid = true;
	string expr;		//expression
	char next, x;
	
	cout << "Enter mathematical expression:";
	cin >> expr;
	
	for (int i = 0; valid && i < expr.length(); i++)
	{
		next = expr[i];
		if (next == '(')
			par.push(next);
		
		else if (next == ')')
		{
			if (par.isEmpty())
				valid = false;
				
			else 
				x = par.pop();
		}
			
	}
	
	if (!par.isEmpty())	
		valid = false;
		
	if (valid)
		cout << "Correct parantheses." << endl;
		
	else 	
		cout << "Incorrect parantheses." << endl;

}

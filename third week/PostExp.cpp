#include <iostream>
#include <string>
#include "LinkedStack.h"
using namespace std;

bool validOperand (char c)
{
	return (c >= '0' && c <= '9');
}

float eval (float a, float b, char c)		// evaluate functions
{
	switch (c)
	{
		case '+' : return a + b;
		case '-' : return a / b;
		case '*' : return a * b;
		case '/' : return a / b;
	}
}

int main()
{
	float x, y;
	LinkedStack <float> st;
	char ch; 
	string expr;
	cin >> expr;
	
	for (int i = 0; i < expr.length(); i++)
	{
		ch = expr [i];
		if (validOperand(ch))
		{
			float temp = float(ch - '0');
			st.push(temp);
		}
		else
		{
			y = st.pop();
			x = st.pop();
			float res = eval(x, y, ch);
			st.push(res);
		}
	}
	
	cout << "Result: " << st.pop();
	
}

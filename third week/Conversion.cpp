#include <iostream>
#include <string>
#include "LinkedStack.h"
#include <cctype>
using namespace std;

bool prec(char a, char b)
{
	if (((a == '+' || a == '-') && (b == '*' || b == '/')))	
		return false;
	else
		return true;
}

int main()
{
	LinkedStack <char> oper;
	char ch, op;
	string expr;
	
	cout << "Enter expression: ";
	cin >> expr;
	
	for (int i = 0; i < expr.length(); i++)
	{
		ch = expr[i];
		if (isalnum(ch))
			cout << ch;	
		else
		{
			if(!oper.isEmpty() && prec (oper.showTop(), ch))
				cout << oper.pop();
			oper.push(ch);
		}
	}
	
	while (!oper.isEmpty())
	{
		cout << oper.pop();
	}	
}

/* 
Write a program to input exam grades of 50 students and find the names of
the students who received the top grades. Use a stack of objects storing
the name and the grades of students who recevied the top grade. Multiple students may receive 
the top grade. output all of their names and the grades.
*/

#include <iostream>
#include <string>
#include "LinkedStack.h"
using namespace std;

class Student
{
	public:
		string name;
		int grade;
		friend ostream& operator << (ostream &os, Student &s)
		{
			os << s.name << " ";
			return os;
		}	
};

int main()
{
	int max = 0;
	Student temp;
	LinkedStack <Student> st;
	
	for (int i = 0; i < 5; i++)
	{
		cout << "Enter Student name and grade: ";
		cin >> temp.name >> temp.grade;
		if(temp.grade > max)
		{
			max = temp.grade;
			st.destroy();
			st.push(temp);
		}
		
		else if (temp.grade == max)
		{		
			st.push(temp);
		}
	}
	
	temp = st.showTop();
	cout << "The top grade is " << temp.grade << endl;
	
	while(!st.isEmpty())
	{
		temp = st.pop();
		cout << temp;
	}	
}

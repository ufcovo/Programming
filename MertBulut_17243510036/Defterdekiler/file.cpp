#include <iostream>
#include <fstream>
#include <string>
#include "LinkedList.h"
using namespace std;

class Person
{
	public:
		int num;
		string name;
		friend istream & operator >> (istream & is, Person & per)
		{
			is >> per.name >> per.num;
			return is;	
		}	
		
		friend ostream & operator << (ostream & os, Person & per)
		{
			os << per.name << " " << per.num << endl;	
			return os;
		}	
		
		Person () {	} 
		Person (int x) { num = x;}
		bool operator == (Person & per) 
		{
			return num == per.num;
		}
};

int main()
{
	ifstream inp ("in.txt");
	LinkedList <Person> stu;
	Person s;
	inp >> s;
	while (!inp.eof())
	{
		stu.insertLast(s);
		inp >> s;
	}
	cout << stu;
	Node <Person> *p;
	Person temp (111);
	p = stu.search(temp);
	if (p != NULL)
		p -> info.name = "Can";
	cout << stu;
}

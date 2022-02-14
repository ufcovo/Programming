#include <iostream>
#include <string>
#include "LinkedList.h"

struct FlightMode
{
	int fno;
	LinkedList <string> pass;
};

int main()
{
	FlightMode flights[4];
	for (int i = 100; i <= 400; i+= 100)
		flights[i / 100 - 1].fno = i;
	
	string comm, name;
	int no;
	
	do
	{
		cout << "Enter ADD, Delete, List, Check or Quit: ";
		cin >> comm;
		
		if (comm == "ADD")
		{
			cout << "Enter flight # and passenger name: ";
			cin >> no >> name;
			flights[no / 100 - 1].pass.insertLast(name);
		}
		
		else if (comm == "Delete")
		{
			cout << "Enter flight # and passenger name: ";
			cin >> no >> name;
			flights[no / 100 - 1].pass.deleteNode(name);	
		}
		
		else if (comm == "List")
		{
			cout << "Enter flight #: ";
			cin >> no;
			cout << "Flights " << no << "list of passanger.";
			cout << flights[no / 100 - 1].pass;
		}
		
		else if (comm == "Check")
		{
			cout << "Enter passanger name: ";
			cin >> name;
			for (int i = 0; i < 4; i++)
			{
				if (flights[i].pass.search(name) != NULL)
					cout << name << " is in flight no: " << flights[i].fno << endl;
			}
		}
	} while (comm == "Quit");
}

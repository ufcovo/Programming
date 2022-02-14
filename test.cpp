#include<iostream>
#include<fstream>
#include<string>
#include "LinkedQueue.h"
#include "LinkedStack.h"
using namespace std;

class Passenger{
	public:
		string name,surname,destination;
};

int main(void){
	
	int ist_cap,ank_cap,ada_cap;//TRAIN CAPACITIES
	int ist_cou=0,ank_cou=0,ada_cou=0;//PASSENGER COUNTER
	
	string name,sur,dest;
	Passenger obj,test;
	char x;
	
	cout<<"Enter Istanbul Train Capacity: ";
	cin>>ist_cap;
	
	cout<<"Enter Ankara Train Capacity: ";
	cin>>ank_cap;
	
	cout<<"Enter Adana Train Capacity: ";
	cin>>ada_cap;
	
	LinkedQueue<Passenger> list;
	
	LinkedStack<Passenger> istanbul;
	LinkedStack<Passenger> ankara;
	LinkedStack<Passenger> adana;
	
	ofstream ist("istanbul.txt");
	ofstream ank("ankara.txt");
	ofstream ada("adana.txt");
	
	ifstream pass_list("passengers.txt");
	
	
	while(!pass_list.eof())
	{
		pass_list>>obj.name>>obj.surname>>obj.destination;//takes passenger
		list.insertQueue(obj);//inserting it to queue
		//cout<<obj.name<<" "<<obj.surname<<" "<<obj.destination<<endl;//couting
		
		if(!list.isEmpty())
		{
			if(obj.destination == "Istanbul")
			{
				if(ist_cou != ist_cap)
				{
					istanbul.push(obj);
					if(!istanbul.isEmpty())
					{
						test = istanbul.pop();
						ist<<test.name<<" "<<test.surname<<endl;		
					}
					ist_cou++;
				}	
			}
			
			if(obj.destination == "Ankara")
			{
				if(ank_cou != ank_cap)
				{
					ankara.push(obj);
					if(!ankara.isEmpty())
					{
						test = ankara.pop();
						ank<<test.name<<" "<<test.surname<<endl;
					}
					ank_cou++;
				}	
			}
				
			if(obj.destination == "Adana")
			{
				if(ada_cou != ada_cap)
				{
					adana.push(obj);
					if(!adana.isEmpty())
					{
						test = adana.pop();
						ada<<test.name<<" "<<test.surname<<endl;		
					}
					ada_cou++;
				}	
			}	
		}	
	}
	if(ist_cou == ist_cap)
		ist<<"Istanbul Train is full!"<<endl;
	if(ank_cou == ank_cap)
		ank<<"Ankara Train is full!"<<endl;
	if(ada_cou == ada_cap)
		ada<<"Adana Train is full!"<<endl;
		
	ist.close();
	ank.close();
	ada.close();
	
}

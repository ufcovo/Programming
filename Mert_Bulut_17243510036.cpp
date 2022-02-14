//Mert Bulut 17243510036
#include <iostream>
#include <fstream>
#include <string>
#include "LinkedQueue.h"
#include "LinkedStack.h"
using namespace std;

class Passengers
{
	public:
		string name, surname, destination;	// these are the variables for Passengers
};

int main()
{
	LinkedStack <Passengers> Ankara;	//passengers of Ankara
	LinkedStack <Passengers> Istanbul;	//passengers of Istanbul
	LinkedStack <Passengers> Adana;		//passengers of Adana
	
	LinkedQueue <Passengers> list;		//list of passengers. This gives name, surname and destination
	
	Passengers obj, grab; //grab means catch
	
	string name, surname;		// for the obj of Passengers 	
	
	int ankara_cap, istanbul_cap, adana_cap; 						// capacity of train
	int ankara_count = 0, istanbul_count = 0, adana_count = 0; 		//passengers of count variable. If do not equal them to zero, can get a garbage value.
	
	cout << "Enter the train capacity of Ankara: ";
	cin >> ankara_cap;			//capacity of Ankara what user entered
	
	cout << "Enter the train capacity of Istanbul: ";
	cin >> istanbul_cap;		//capacity of Istanbul what user entered
	
	cout << "Enter the train capacity of Adana: ";
	cin >> adana_cap;			//capacity of Adana what user entered
	
	ofstream ankara ("ankara.txt");			//open the ankara.txt and write the info
	ofstream istanbul ("istanbul.txt");		//open the istanbul.txt and write the info
	ofstream adana ("adana.txt");			//open the adana.txt and write the info
	
	ifstream passengers_text("passengers.txt");		// reads the passengers.txt what it has the info
	
	while (!passengers_text.eof ())
	{
		passengers_text >> obj.name >> obj.surname >> obj.destination; // taking the value of passenger
		list.insertQueue(obj); 		//pushing the value to queue
		cout << obj.name << " " << obj.surname << " " << obj.destination << endl;	//printing the passengers.txt what it has
		
		if (!list.isEmpty())
		{
			if (obj.destination == "Ankara") 
			{
				if (ankara_count != ankara_cap)
				{
					Ankara.push (obj);
					if (!Ankara.isEmpty ())
					{
						grab = Ankara.pop ();
						ankara << grab.name << " " << grab.surname << endl;		//this is overloading func.use for taking the name and surname who are going to Ankara
					}
					ankara_count++;
				}
			}
			
			if (obj.destination == "Istanbul")
			{
				if (istanbul_count != istanbul_cap)
				{
					Istanbul.push (obj);
					if (!Istanbul.isEmpty ())
					{
						grab = Istanbul.pop ();
						istanbul << grab.name << " " << grab.surname << endl;	//this is overloading func.use for taking the name and surname who are going to Istanbul
					}
					istanbul_count++;
				}
			}
			
			if (obj.destination == "Adana")
			{
				if (adana_count != adana_cap)
				{
					Adana.push (obj);
					if (!Adana.isEmpty ())
					{
						grab = Adana.pop ();
						adana << grab.name << " " << grab.surname << endl;		//this is overloading func.use for taking the name and surname who are going to Adana
					}
					adana_count++;
				}
			}
		}
	}
	
	if (ankara_count == ankara_cap)				// if the count and capacity is the same value then train is full
		ankara << "Train of Ankara is full." << endl;
		
	if (istanbul_count == istanbul_cap)			// if the count and capacity is the same value then train is full
		istanbul << "Train of Istanbul is full." << endl;	
		
	if (adana_count == adana_cap)				// if the count and capacity is the same value then train is full
		adana << "Train of Adana is full." << endl;
	
	ankara.close();		// close the ankara.txt
	istanbul.close();	// close the istanbul.txt
	adana.close();		// close the adana.txt
	
}

//17243510036 Mert BULUT
#include<iostream>
#include "LinkedList_MertBulut_17243510036.h"    //include LinkedList header file
using namespace std;

//main function
int main()
{
   LinkedList <int> descen_order;
   int numbers;
  
   for(int i = 0; i < 10; i++)		 //take user input for 10 elemenets
   {
        cout << "Enter an integer: ";
        cin >> numbers;
      
        descen_order.insert_descending (numbers);	//call linked list function to insert in descen_order
   }
  
   cout << descen_order;	//print elements of list
  
   return 0;
}

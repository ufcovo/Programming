#include <iostream>
#include "Queue.h"

using namespace std;

int main()
{
    Queue <int> breads;
    Queue <string> times;
    
    int numberbread = 0, total = 0;
    string a;
    
    for(int i = 0; i < 5; i++)
	{
        cout << "How many breads do you want Person " << i + 1 << ":";
        cin >> numberbread;
        breads.insertQueue(numberbread);
    }
    
    numberbread=0;
    
    while(!breads.isEmpty())
	{
        total += breads.deleteQueue();
        if(total >= 10)
		{
            cout << total<<" breads are sold. Enter time in hh:mm format:";
            cin >> a;
            times.insertQueue(a);
            total = total - 10;
            numberbread++;
        }
    }
    
    while(!times.isEmpty())
	{
        a = times.deleteQueue();
        cout << "10 breads sold. Current Time=" << a << endl;
    }
    return 0;
}

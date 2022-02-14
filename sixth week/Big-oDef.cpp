/*
O-Notation Order of Magnitude (Big-O):
--------------------------------------
The order of magnitude of a function is identified with the term in the function that increases
fastest relative to the size of the problem.

e.g: f(n) = n^4 + 5n^2 + 10n + 50
the f(n) is of order O (n^4)	

When n is large, n^4 increases the most (n^4 > 5n^2 > 10n > 50)

For the following algorithm
	open a file
	while more elements in the array
		print the element onto the file

if n is the number of elements in the array, the time required for this task:
	time to open a file + (n * time to print 1 element)
1 + (n * 1)
1 + n
O (n)

Common Orders of Magnitudes:
----------------------------

O(1) : constant time (not dependent on the size of the problem)

O(n) : linear time (printing the elements of an array)

O(log n), O(nlogn) : Logarithmic time

O(n^2) : Quadratic time

O(n^3) : cubic time

O(2^n) : Exponential time

up to n^m we call functions as polynomial, 2^n and higher are names as non-polynomial

Relative Sizes of Functions:
----------------------------

N size	| 1 		log n 		n		nlog n 		n^2			n^3			2^n
1		| 1			0			1		0			1			1			2
10		| 1			3.32		10		33			100			1000		1024
100		| 1			6.64		100		66			10000		10000000	1.268 * 10 ^ 30
1000	| 1			9.97		1000	9970		1000000		10^9		...........

Searching:
----------
Given one piece of information (called key) , find a record which contains other information
associated with the key.
(e.g: in a phone directory, given a name of the person you can reach their phone numbers)

Searching is used in insertion, deletion and finding a relevant record.

Efficiency:
-----------
	1) Time required to code the algorithm
	**2) Time required for execution
	*3) Amount of memory space required

Efficiency of the swquential Searching:
---------------------------------------
Best case : if the record is the first one in the list, 1 comparison: O(1)
Worst case : if the record is the last one in the list, n comparison: O(n)
Average case : (n+1)/2 : O(n)

when we talk about effiency and Big-O we always will consider the worst case
So the efficieny of Sequential Search is O(n)

Binary Search:
--------------
It is a "Divide and Conquer" algorithm
The searched key is compared with the key in the middle of the ordered list, if not equal,
the upper or lower half of the list is searched.

item : 64

64 ?= 22 NO it is larger


0 1 2 3 4  5  6  7  8 : indices of the array
1 3 5 9 22 34 64 77 93 : values in the array

item : 64
(8+5)/2 = 6

64 ?= 64 YES we return 6

5  6  7  8 
34 64 77 93 

--------------------------------------------

item: 4
(0+8)/2 = 4 middle

4!= 22 smaller

0 1 2 3 4  5  6  7  8 : indices of the array
1 3 5 9 22 34 64 77 93 : values in the array


item: 4

(0+3)/2 = 1

4 != 3 grater

0 1 2 3 
1 3 5 9 


item: 4
(2+3)/2
 4!= 5
4 does not exists in the list

2 3
5 9
*/

#include <iostream>
using namespace std;

int binarySearch (int list[], int length, int item)
{
	int low = 0, high = length - 1, mid;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (item == list[mid])
			return mid;
		else if (item < list [mid])
			high = mid - 1;
		else
			low = mid + 1;
	}
	return -1;
}

int main()
{
	int list [] = {1, 3, 5, 9, 22, 34, 64, 77, 93};
	int pos = binarySearch(list, 9, 77);
	if (pos >= 0)
		cout << "Item found in position " << pos << endl;
	else
		cout << "Item not found " << endl;
}



//Complexity of Binary Search O(log2 n)



































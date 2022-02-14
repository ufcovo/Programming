Queues 
-----
a list in which all additions to the list are done at one end,
and all deletions are done at the other end.
(Fist in First Out Data Structure - FIFO)

Queue - Kuyruk
Bank Queue - Banka Kuyruðu
Lunch Queue - Yemek sýrasý

--------------
| 5 | 8 | 4 |
--------------
front 		rear

1) Delete an element
---------
| 8 | 4 |
---------
front 		rear

2) Add element 6

--------------
| 8 | 4 | 6 |
--------------
front 		rear


Queue Abstract Data type:
-------------------------
Name:
	Queue
Domain:
	Array of items
	positons of front and rear elements
	maximum size of the array
Operations:
	initialize queue	
	destroy queue
	check whether queue is empty or not	
	check whether queue is full or not
	show front element
	show rear element
	add to the queue
	delete from the queue
	
Implementation of Queues with Arrays:
------------------------------------

Data Members:
	array: holds elements
	front: shows first element position in the array
	rear: shows last element position in the array
	max: shows maximum size of the array
	
Problems:
	
max = 4;

add (10)
add (11)
add (14)
add (16)

	  0	  1   2   3 
	-----------------
a	|10	|11	|14	|16	|
	-----------------
  front 			rear

delete ()
delete ()

	  0	  1   2   3 
	-----------------
a	|	|	|14	|16	|
	-----------------
  			front 	rear
  			
add (18) -> queue is full even though it actually isn't
*Even though we have 2 empty spaces, we cannot insert a new element to the queue

Solution:
--------
Circular Queues (Arrays)

Problem with circular queues:
	How do u understand if the queue is full or empty?
Solution:
	Use count
	

We will use arrays to implement Queues when we return!!























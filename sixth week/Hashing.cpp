Hashing: 
-------

When searching for a record, what if the key is not in the index.
  ------------
0|2005	 Beril|
1|19876	 Özlem|			key 19876 is searched, which is not the index.
2|6654	 Emre |
3|1152	 Ahmet|
  ------------
  
* We can concert the key to an inteher acting like an index. 
* No two keys should be converted to the same integer. (avoid collision)

Hash function: a func that transforms a key into a hash table index.
When choosing a hash function:
	1) Quick and easy to compute
	2) Achieve even distribution of keys (minimize collision)
	
Example of Hash Functions:
--------------------------
1) Mid-Square : Key is multiplied by itself. Hash func returns some of the middle digits
of the result.

e.g: key 6185
		 6185 ^ 2 = 38254525 assume that we have a hash table of 100 elements. (array range: 0 - 99)
take 2 from the		   --	so 54 is the index. 
middle

2) Folding: Partition the key into several parts and combine them in a conveniant way.

e.g: 62538164 assume that your tavle size is 1000.
	 625 + 381 + 94 = 1100 % 1000 = 100.				table boyutunu geçriði için % aldýk!!!
	 
3) Modular Arithmetic (Remainder): convert the key into an integer, divide by the size of the hash table
take the remainder.

h(x) = key % tablesize
h(689765) = 689765 % 997 = 838

pick table size to be a prime number in order to better distribute the values in the table.

keys: 8, 0, 5, 13, 1
table size: 7

h(8) = 8 % 7 = 1
h(0) = 0 % 7 = 0
h(5) = 5 % 7 = 5
h(13)= 13% 7 = 6
h(1) = 1 % 7 = 1 collision
h(15) = 15 % 7 = 1
h(11) = 11 % 7 = 4
h(34) = 34 % 7 = 6 OVERFLOW !!!

hash table
  ------
0|  0	|
1|  8	|
2|	1	|	
3|	15	|
4|	4	|
5|  5	|
6|  13	|
  ------	 
  

Example hash function: Add the digits of the key value and take the remainder according to the table size

table size : 10
key : 123

h(123) = 1 + 2 + 3 = 6 % 10 = 6 
  
Collision Resolution Algorithms:
--------------------------------

When two keys map to the same index on the table how do you handle it?
	1) Open Addressing
	2) Chaining
	
1) Open Addressing
------------------
*) Linear Probing:
------------------
if a collision has occured, do a squential search trough the table for an empty location starting from the
desired position

insertion:
  
keys: 8, 0, 9, 15, 13, 1
table size: 7

h(8) = 8 % 7 = 1
h(0) = 0 % 7 = 0
h(9) = 9 % 7 = 2
h(15) = 15 % 7 = 1 collision

searching for 1: h(1) = 1 % 7 = 1


hash table
  ------
0|  0	|
1|  8	|
2|	9	|	
3|	15	|
4|		|
5|  	|
6|  	|
  ------	 
  
  
*) Random Probing: a random number generator is used to find the next slot. Same sequence of random 
numbers are used.

desired index + random sequence = next position
random sequence: 1, 3, 4, -5, 12

insertion:
  
keys: 8, 0, 9, 15, 13, 1
table size: 7

h(8) = 8 % 7 = 1
h(0) = 0 % 7 = 0
h(9) = 9 % 7 = 2
h(15) = 15 % 7 = 1 collision

desired is 1 next in random is 1 pos = 2, collision
desired is 1, next in random is 3, pos = 4, no clollision place it

searching for 1: 


hash table
  ------
0|  0	|
1|  8	|
2|	9	|	
3|		|
4|	15	|
5|  	|
6|  	|
  ------	 
    
  
*Quadratic Probing:
-------------------
Follows the probe sequence to find the next empty position

pos + 1^2	:1
pos + 2^2	:4
pos + 3^2	:9
pos + 4^2	:16 % 10 6th position
 
%size
  
  
2) Chaining:
------------

Keep a linked list for all records whose keys hash into the particular value.
  
  
insertion:
  
keys: 8, 0, 9, 15, 13, 1, 6, 21
table size: 7

h(8) = 8 % 7 = 1
h(0) = 0 % 7 = 0
h(9) = 9 % 7 = 2
h(15) = 15 % 7 = 1 collision  

when chaining is used overflow is also negated
because u are no longer limited with the size of the table
  
hash table
  ------
0|  	| -> |0| | -> |21| | -> null
1|  	| -> |8| | -> |15| | -> |1| | -> null
2|		| -> |9| | ->null	
3|		| -> null
4|		| -> null
5|  	| -> null
6|  	| -> |13| | ->  |6| |-> null
  ------	 

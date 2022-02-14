Sorting:
-------
Ordering arrays or linked list

Bubblesort:
-----------
Pass through the array elements several times. In each pass, compare
the element with its successor. If out of order, interchange.

e.g: Sort the below numbers using bublesort algorithm show each pass of
your operation.

		36	24	10	6	12
pass1:	24	10	6	12	36
pass2:	10	6	12	24	36
pass3:	6	10	12	24	36

worst case: O(n^2) 

---------------------------------------------------------------------------------------------------------------------------------

Insertion Sort:
---------------
Insert elements into the sorted portion of the array one by one.

e.g:Sort the array below using insertion sort algorithm and show each 
pass of your operation with the contents of the array.

temp: 3

  ------
0[	8	]sorted
1[	3	]unsorted (chosen)
2[	2	]u
3[	9	]u
4[	1	]u
  ------
  
pass1:
	
  ------
0[	3	]sorted
1[	8	]sorted 
2[	2	]u (chosen)
3[	9	]u
4[	1	]u
  ------
  
array: 3,8,3,9,1
  
pass2:
	
  ------
0[	2	]sorted
1[	3	]sorted 
2[	8	]sorted 
3[	9	]u (chosen)
4[	1	]u
  ------
  
array: 2,3,8,9,1

pass 3:
  
  ------
0[	2	]sorted
1[	3	]sorted 
2[	8	]sorted 
3[	9	]sorted 
4[	1	]u (chosen)
  ------

array: 2,3,8,9,1

pass4:

  ------
0[	1	]sorted
1[	2	]sorted 
2[	3	]sorted 
3[	8	]sorted 
4[	9	]sorted
  ------

array: 1,2,3,8,9

O(n^2)

---------------------------------------------------------------------------------------------------------------------------------
  
Selection Sort:
---------------
Smallest of the remaining elements of the array is placed in its proper place.

e.g: Sort the below values using selection sort, show each pass of your algorithm
126,43,26,1,113

  ------
0[	126	]
1[	43	] 
2[	26	] 
3[	1	] *
4[	113	]
  ------
  
array:126,43,26,1,113
  
pass1:

  ------
0[	1	] sorted
1[	43	] 
2[	26	] *
3[	126	] 
4[	113	]
  ------  

array:1,43,23,123,113
  
pass2:
	
  ------
0[	1	] sorted
1[	26	] sorted
2[	43	] *
3[	126	] 
4[	113	]
  ------  

array3:1,26,43,126,113

pass3:

  ------
0[	1	] sorted
1[	26	] sorted
2[	43	] sorted
3[	126	] 
4[	113	] *
  ------ 	
  
array:1,26,43,126,113	

pass4:
  ------
0[	1	] sorted
1[	26	] sorted
2[	43	] sorted
3[	113	] sorted
4[	126	] sorted
  ------   
  
array:1,26,43,113,126

o(n^2)
  
-------------------------------------------------------------------------------------------------------------------------------------

Quicksort:
----------

Choose an element (first,middle,last) as pivot and split the array into two
where elements to the left of the pivot are less than or equal to it and
elements to the right are greater than the pivot.
Then continue the same sorting operation for left and right subarrays.

e.g: Sort the below velues using quicksort algorithm. Pick first item as pivot.

		(26) 	33 	35	29	19	12	22
pass1:	(19)	12	22	|26|	(33)	35	29

pass2:	12 |19| 22 [26] 29 |33| 35

pass1 array contents = 19,12,22,26,33,35,29

O(n^2)


-------------------------------------------------------------------------------------------------
  
Mergesort:
----------
Divide the array into subarrays of size 1 and merge the adjacent subarrays.
Repeat this process for other subarrays..

	[12]	[35]	[52]	[34]	[11]	[85]	[78] 	[42]
p1: 	[12,35]		   [34,52]         [11,85]	 	   [42,78]  
p2:  			[12,34,35,52]					[11,42,78,85]		
p3:				   	  [11,12,34,35,42,52,78,85]

pass2 aray content: 12,34,35,52,11,42,78,85

O(nlogn)
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

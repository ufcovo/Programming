Infix, Postfix and Prefix Notations
-----------------------------------

to evaluate
2 + 3 * 5 -> 2 + 15 = 17

infix notation: operator is in between the operands

   a		   +			   b				(a + b)
operand		operator		operand				infix

   +		   a			   b				(+ab)
operator	operand			operand				prefix

   a		   b			   +				(ab+)
operand		operand		    operator			postfix

(2 + 3) * 5 = 5 * 5 = 25

to avoid parantheses, you can use prefix/postfix notation

Infix					Postfix					Prefix	
-----					-------					------
a + b					a b +					+ a b
a / b + c				a b / c +				+ / a b c
4 / 2 + 3				4 2 / 3 +				+ / 4 2 3

We will solve these things using stacks!!


Evaluate Postfix Expression
--------------------------

5 3 * 6 8 2 / - +
-----   -----
15    6  4  - +
	  -------
15		2      +
17


conversion of Infix to Prefix and Postfix
-----------------------------------------

Operations with the highest precedence are converted first, and the portion
that is converted is treated as as single operand
Same precedence are evaluated left to right, expect for exponentiation which is
right to left

infix									postfix											prefix
(a + b) * c								ab+c*											*+abc
a / b * c - d + e / f / (g + h)			ab/c*d-ef/gh+/+									+-*/abcd/ /ef+gh		
---------		-----	--------
ab/c*			ef/		   gh+	
-------------	---------------
ab/c*-d+e			ef/gh+

Conversion Algorithm from Infix to Postfix
------------------------------------------
1- Output operands
2- push higher precedence operators into stack
3- if smaller or equal precedence pop and output  


































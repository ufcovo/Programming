/*
Write a program to evaluate a multiple choice exam where the question & correct answer
are stored in a text file.

Syntax of the text:

Question text .......... A.---- B.----- C.----- D.----
B
Q.2.............
C
Q.3S.........
A

In your program include
- Question class: question & correct answer
- Exam queue
- Incorrect question queue

Ask the question to the user, and output the number of question in the exam, the number of
correct answer and the question that are incorrectly answered.

use getLine(int, st) to read a whole line

*/

#include <iostream>
#include "LinkedQueue.h"
#include <fstream>

class Question
{
	public:
		string q;
		string ans;	
};

int main()
{
	LinkedQueue <Question> exam, incorrect;
	Question temp;
	string res;
	int correct, num_ques=0;
	ifstream inp("in.txt");
	while(!inp.eof())
	{
		getline (inp, temp.q);
		getline (inp, temp.ans);
		exam.insertQueue(temp);
	}
	
	while (!exam.isEmpty())
	{
		temp = exam.deleteQueue();
		num_ques++;
		cout << temp.q;
		cout << " \n Your answer: ";
		cin >> res;
		if (res == temp.ans)
			correct++;
		else
			incorrect.insertQueue(temp);
	}
	
	cout << "Number of questions in the exam: " << num_ques << endl;
	cout << "Number of correct answer: " << correct << endl;
	cout << "Incorrectly answered question " << endl;
	while (!incorrect.isEmpty())
	{
		temp = incorrect.deleteQueue();
		cout << temp.q << endl;
	}
}

//Write the include statement for decisions.h here
#include <iostream>
#include "decision.h"
//Write namespace using statements for cout and cin
using std::cout;
using std::cin;

int main() 
{
	int grade;
	char ifGrade = ' ';
	char switchGrade = ' ';

	cout<< "\nEnter a number between 0 and 100: ";
	cin>>grade;
	
	if(grade >= 0 && grade <= 100)
	{
	ifGrade = get_letter_grade_using_if(grade);
	switchGrade = get_letter_grade_using_switch(grade);
	cout<< "\nLetter grade using \'get_letter_grade_using_if\' function: " <<ifGrade <<std::endl;
	cout<< "Letter grade using \'get_letter_grade_using_switch\' function: " <<switchGrade <<"\n";
	}

	else 
	{
		cout<< "Number is out of range (Must be between 0 and 100)";
	}
	return 0;
}


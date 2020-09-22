//Write the include statement for types.h here
#include <iostream>
#include "types.h"
//Write include for capturing input from keyboard and displaying output to screen
using std::cin;
using std::cout;


int main() 
{
	int num;
	cout<<"Enter a number to multiply: ";
	cin>>num;

	int result = multiply_numbers(num);
	cout<<"Result of multiply_numbers using user input("<<num <<"): " <<result <<std::endl;

	int num1 = 4;
	result = multiply_numbers(num1);
	cout<<"Result of multiply_numbers using variable num1("<<num1 <<"): " <<result;

	return 0;
}


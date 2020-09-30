//write includes statements
#include <iostream>
#include "loops.h"

//write using statements for cin and cout
using std::cout;
using std::cin;

/*
Use a do while loop to prompt the user for 
a number, call the factorial function, and display the number's
factorial.  Also, loop continues as long as user wants to.
*/
int main() 
{
	int num, fact;

	cout<< "\nFactorial Calculator\n";

	do 
	{
		cout<< "\nEnter a number from 1 to 10 (Enter 0 to exit): ";
		cin>> num;

		if(num > 0 && num <= 10)
		{
			fact = factorial(num);
			cout<< num<< " factorial is: "<< fact<< "\n";
		}

		else if (num < 0 || num > 10)
		{
			cout<< "Number must be between 1 and 10 (Except 0)\n";
		}

	} while (num != 0);
	
	return 0;
}
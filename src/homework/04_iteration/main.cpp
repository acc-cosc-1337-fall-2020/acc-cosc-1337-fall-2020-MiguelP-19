//write include statements
#include <iostream>
#include <string>
#include "dna.h"
//write using statements
using std::cout;
using std::cin;
using std::string;

/*
Write code that prompts user to enter 1 for Get GC Content, 
or 2 for Get DNA Complement.  The program will prompt user for a 
DNA string and call either get gc content or get dna complement
function and display the result. Program runs as long as 
user enters a y or Y.
*/
int main() 
{
	char choice = ' ';
	string dna = " ";

	do
	{
		cout<< "\nEnter one of the following (or \'Y\' to exit)"<< std::endl;
		cout<< "1 - Get GC Content"<< "\n2 - Get DNA Complement"<< std::endl;
		cout<< "Choice: ";
		cin>> choice;

		switch (choice)
		{
			case '1':
				cout<< "\nEnter a DNA string to get its GC content: ";
				cin>> dna;
				cout<< "GC content of entered string: "<< get_gc_content(dna)<< std::endl;
				break;

			case '2':
				cout<< "\nEnter a DNA string to get its DNA complement: ";
				cin>> dna;
				cout<< "GC content of entered string: "<< get_dna_complement(dna)<< std::endl;
				break;

			case 'y':
				break;
			case 'Y':
				break;

			default:
				cout<< "\nInvalid option entered";
				break;
		}

	}while(choice != 'y' && choice != 'Y');

	return 0;
}
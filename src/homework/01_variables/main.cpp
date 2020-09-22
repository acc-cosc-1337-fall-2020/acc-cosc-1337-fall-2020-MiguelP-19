//write include statements
#include <iostream>
#include <iomanip>
#include "variables.h"

//write namespace using statement for cout
using std::cin;
using std::cout;

/*
Call multiply_numbers with 10 and 10 parameter values and display function result
*/
int main()
{
	double meal_amount, tip_rate, tip_amount, tax_amount, total;
	cout<< "Enter the meal cost: $";
	cin>> meal_amount;
	tax_amount = get_sales_tax_amount(meal_amount);

	cout<< "Enter the tip rate (as a decimal): ";
	cin>> tip_rate;
	tip_amount = get_tip_amount( meal_amount, tip_rate);

	total = tax_amount + meal_amount + tip_amount;
	cout<< std::fixed<< std::setprecision(2)<< std::endl;
	cout<< "Meal Amount:  "<< meal_amount<< std::endl;
	cout<< "Sales Tax:  "<< tax_amount<< std::endl;
	cout<< "Tip Amount:  "<< tip_amount<< std::endl;
	cout<< "Total:  "<< total<< std::endl;

	return 0;
}

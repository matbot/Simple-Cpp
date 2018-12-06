/*************************************
**Author: Mathew McDade
**Date: Tue Mar 29 17:47:59 PDT 2016
**Desription: This program will take a number of cents and outputs how many of each type of coin are necessary to make that change with the fewest coins possible.
*************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	int change, Quarters, Dimes, Nickels, Pennies;
	cout << "Please enter an amount in cents less than a dollar:"<<endl;
	cin >> change;

	Quarters = change / 25;
	change %= 25;
    Dimes =	change / 10;
	change %= 10;
	Nickels = change / 5;
	change %= 5;
	Pennies = change / 1;
	
	cout << "Your change will be:" << endl;
	cout << "Q: " << Quarters << endl;
	cout << "D: " << Dimes << endl;
	cout << "N: " << Nickels << endl;
	cout << "P: " << Pennies << endl;

	return 0;
}	

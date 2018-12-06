/*************************************
**Author: Mathew McDade
**Date: Tue Mar 29 17:23:07 PDT 2016
**Desription: This program will take a temperature in Celsius and output the temperature converted to Fahrenheit.
*************************************/

#include <iostream>
using std::cout;
using std::cin;
using std::endl;

int main()
{
	float fahrenheit, celsius;

	cout << "Please enter a Celsius temperature:" << endl;
	cin >> celsius;
	fahrenheit = celsius * 1.8 + 32;
	cout << "The equivalent temperature in Fahrenheit is:\n" << fahrenheit << endl;
	return 0;
}

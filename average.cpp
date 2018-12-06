/*************************************
**Author: Mathew McDade
**Date: Tue Mar 29 15:59:31 PDT 2016
**Desription: This program will take five integers from standard input and return the average of those integers to standard output.
*************************************/

#include <iostream>
using std::cin;
using std::cout;
using std::endl;

int main()
{
	float firstNumber, secondNumber, thirdNumber, fourthNumber, fifthNumber, sum, average;
	cout << "Please enter five numbers:\n";
	cin >> firstNumber>>secondNumber>>thirdNumber>>fourthNumber>>fifthNumber;
	sum = firstNumber + secondNumber + thirdNumber + fourthNumber + fifthNumber;
	average = sum / 5;
	cout << "The average of those numbers is:\n " << average<<endl;
	return 0;
}

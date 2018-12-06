/*************************************
**Author: Mathew McDade
**Date: Tue Apr 19 16:53:07 PDT 2016
**Desription: This program passes three int values, passes them to a function, smallSort, by reference, and returns those values in order from smallest to largest.
*************************************/

#include <iostream>

using namespace std;

void smallSort(int&,int&,int&); //This function prototype includes three int parameters by reference.
								//This is important as the function is intended to change that variables that are passed to it.

int main()
{
	int first,second,third;
	cout << "Please enter three integer values:" << endl;
	cin >> first >> second >> third;
	smallSort(first,second,third);
	cout << "Min:" << first << endl << "Mid:" << second << endl << "Max:" << third << endl;
	return 0;
}

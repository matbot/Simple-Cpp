/*********************************************
 * *Author: Mathew McDade
 * *Date: 
 * *Description: 
 * *********************************************/
#include <iostream>
#include <string>
#include <unistd.h>
#include <vector>
#include "rFunctions.hpp"
#include "utils.hpp"

using std::string;
using std::cin;
using std::cout;
using std::endl;

/****************
 * recusionMenu
 * *************/
void recursionMenu()
{
	int choice = 0;
	while(choice!=4)
	{
		clearPage();
		cout << "Welcome to Mathew McDade's Recursive Functions";
		usleep(100000);
		cout << "Please choose from the following menu options:" << endl;
		cout << "1. Reverse a string." << endl;
		cout << "2. Sum an array." << endl;
		cout << "3. Get a triangular number." << endl;
		cout << "4. Quit." << endl;
		cout << "Enter your selection: "; 

		choice = getInt(1,4);

		switch(choice)
		{
			case 1:
			{
				clearPage();
				cout << "Please enter a string to be reversed: " << endl;
				string rvrsStr;
				std::cin.ignore(256,'\n');
				std::getline(cin,rvrsStr);
				cout << stringReverse(rvrsStr) << endl;
				std::cin.sync();
				std::cin.clear();
				cout << "Enter any key to return to the menu." << endl;
				char cont;
				cin >> cont;
				std::cin.sync();
				std::cin.clear();
				std::cin.ignore(256,'\n');
				break;
			}
			case 2:
			{
				clearPage();
				cout << "Please enter integer values to be summed: " << endl;
				cout << "Enter any non integer character when you're finished entering values." << endl;
				std::vector<int> intVect;
				int* intArray;
				int  userVals;
				int valCount = 0;
				while(!std::cin.fail())
				{
					std::cin.sync();
					std::cin.clear();
					std::cin.ignore(256,'\n');
					cin >> userVals;
					if(std::cin.fail())
					{
						fflush(stdin);
						std::cin.ignore(256,'\n');
					}
					else
					{
						intVect.push_back(userVals);
						valCount++;
					}
				}
				intArray = new int[valCount];
				std::copy(intVect.begin(),intVect.end(),intArray);
				cout << "Sum: " << arraySum(intArray,valCount) << endl;
				delete[] intArray;
				std::cin.sync();
				std::cin.clear();
				std::cin.ignore(256,'\n');
				cout << "Enter any key to return to the menu." << endl;
				cin >> userVals;
				std::cin.sync();
				std::cin.clear();
				std::cin.ignore(256,'\n');
				break;
			}
			case 3:
			{
				clearPage();
				cout << "Please enter a number of rows in the triangle:" << endl;
				int triRows = getInt();
				cout << "Triangular Number: " << trianglNumber(triRows) << endl;
				std::cin.sync();
				std::cin.clear();
				std::cin.ignore(256,'\n');
				cout << "Enter any key to return to the menu." << endl;
				char cont;
				cin >> cont;
				std::cin.sync();
				std::cin.clear();
				std::cin.ignore(256,'\n');
				break;
			}
			case 4:
				return;
		}
	}
}
	

/*****************
 * stringReverse
 * **************/
string stringReverse(string rString)
{
	if(rString.length()==1)
		return rString;
	else
		return stringReverse(rString.substr(1))+rString[0];
}

/************
 * arraySum
 * *********/
int arraySum(int* userInts, int numInts)
{
	//for(int i=0;i<numInts;i++)
		//cout << userInts[i];
	int sum = 0;
	if(numInts==0)
		return sum;
	else
		return arraySum(userInts, numInts-1) + userInts[numInts-1];
}

/*****************
 * trianglNumber
*****************/
int trianglNumber(int rows)
{
	if(rows==0)
		return rows;
	else
		return trianglNumber(rows-1) + rows;
}

/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov 26 03:58:32 PST 2016
 * *Description: The Main Method
 * *********************************************/
#include "buffer.hpp"
#include "palindrome.hpp"
#include "utils.hpp"
#include <string>
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
	srand(time(NULL));
	clearPage();
	cout << "Welcome to Mathew McDade's buffer and palindrome implementation!" << endl << endl;

	int choice = 0;
	while(choice!=3)
	{
		cout << "Please select from the following options:" << endl;
		cout << "1. Run a buffer test." << endl;
		cout << "2. Make a palindrome." << endl;
		cout << "3. Exit program." << endl;
		choice = getInt(1,3);

		switch(choice)
		{
			case 1:{
				clearPage();
				cout << "How many cycles would you like the buffer to run?" << endl;
				int cycles = getInt();
				cout << "What is the percent chance a value will be added to the buffer?"
					<< endl;
				int add = getInt(100);
				cout << "What is the percent chance a value will be removed?" << endl;
				int rem = getInt(100);
				Buffer b(cycles,add,rem);
				int bufferAvg = b.runBuffer();
				cout << endl << "Average buffer length: " << bufferAvg << endl << endl;
				break;}
			case 2:{
				clearPage();
				cout << "What word would you like to make a palindrome with?" << endl;
				string s;
				cin.ignore(256,'\n');
				getline(cin,s);
				Palindrome p(s);
				string palindrome = p.reverse();
				cout << palindrome << endl;
				break;}
			case 3:
				break;
		}
	}
	return 0;
}

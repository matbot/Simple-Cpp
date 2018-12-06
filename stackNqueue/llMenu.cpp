
#include "intStack.hpp"
#include "intQueue.hpp"
#include "utils.hpp"
#include <iostream>

using namespace std;


void stackMenu()
{
	clearPage();
	IntStack stack;

	int choice = 0;
	while(choice!=3)
	{
		cout << "Would you like to:" << endl;
		cout << "1. Add an integer to the stack." << endl;
		cout << "2. Pop an integer off the top." << endl;
		cout << "3. Back to main menu" << endl;

		choice = getInt(1,3);
		switch(choice){
			case 1:{ cout << "What integer would you like to add to the stack?" << endl;
					  stack.push(getInt());
					  break; }
			case 2:{ int num = stack.pop();
					  if(num!=-123456789)
						cout << "Popping off the top value: " << num << endl << endl;
					  break; }
			case 3: return; }
	}
}

void queueMenu()
{
	clearPage();
	IntQueue queue;

	int choice = 0;
	while(choice!=3)
	{
		cout << "Would you like to:" << endl;
		cout << "1. Add an integer to the queue." << endl;
		cout << "2. Dequeue an integer from the front of the queue." << endl;
		cout << "3. Back to the main menu" << endl;

		choice = getInt(1,3);
		switch(choice){
			case 1:{ cout << "What integer would you like to add to the queue?" << endl;
					  queue.enqueue(getInt());
					  break; }
			case 2:{ int num = queue.dequeue();
					  if(num!=-123456789)
						  cout << "Dequeing the front value: " << num << endl << endl;
					  break; }
			case 3: return; }
	}
}

/****************************************
 * LLMenu(): is the primary driver for
 * the stack and queue implementations.
 * *************************************/
void llMenu()
{
	int choice = 0;
	while(choice!=3)
	{
		clearPage();
		cout << "Welcome to Mathew McDade's integer stack and queue implementation." << endl;
		cout << "Would you like to work with:" << endl;
		cout << "1. A stack structure" << endl;
		cout << "2. A queue structure" << endl;
		cout << "3. Quit Program" << endl;
		choice = getInt(1,3);
		switch(choice){
			case 1: stackMenu();
				   break;
			case 2: queueMenu();
				   break;
			case 3: return;}
	}
}

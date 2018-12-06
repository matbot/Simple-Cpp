/******************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct 16 17:03:40 PDT 2016 
 * *Description: gameMenu implementation. 
 * ***************************************/

#include <iostream>
#include <unistd.h> //for usleep().
#include "gameMenu.hpp"
#include "game.hpp"
#include "utils.hpp"

using std::cin; 
using std::cout;
using std::endl;

void gameMenu(int &tT, int &p1S, int &p2S, Loadedness &p1T, Loadedness &p2T)
{
	clearPage();
	cout << "Welcom to Mathew McDade's implementation of the loaded dice game!"
		<< endl << endl;
	usleep(2500000);
	cout << "You have several options to select for this particular game." 
		<< endl << endl;
	cout << "First, how many rounds would you like to play?" << endl << endl;
	cout << "How many sides will Player 1's die have?" << endl;
	cout << "How many sides will Player 2's die have?" << endl << endl;
	cout << "\033[5;48H";	//move cursor to appropriate user input line.
	tT = getIntNoMove(5,48);
	cout << "\033[7;42H";
	p1S = getIntNoMove(7,42);
	cout << "\033[8;42H";
	p2S = getIntNoMove(8,42);
	
	usleep(500000);
	clearPage();

	cout << "Cheaters?" << endl;
	cout << "Will Player 1's die be loaded?(enter 1 or 2)" << endl;
	cout << "1. Normal" << endl << "2. Loaded" << endl;
	p1T = static_cast<Loadedness>(getInt(1,2));
		//static cast lets getInt cast to my enum type.

	cout << "Will Player 2's die be loaded?(enter 1 or 2)" << endl;
	cout << "1. Normal" << endl << "2. Loaded" << endl;
	p2T = static_cast<Loadedness>(getInt(1,2));

	usleep(300000);
}

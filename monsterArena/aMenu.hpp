/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 12:12:23 PDT 2016
 * *Description: A menu for user interaction
 * with the creature battle program.
 * *********************************************/
#ifndef MMCD_AMENU_HPP
#define MMCD_AMENU_HPP

#include "arena.hpp"
#include "creature.hpp"
//#include "vamp.hpp"
//#include "barb.hpp"
//#include "bluem.hpp"
//#include "medusa.hpp"
//#include "harryPotter.hpp"
#include "utils.hpp"
#include <iostream>
#include <unistd.h>
//#include <string>

using std::cin;
using std::cout;
using std::endl;

/***********
 * aMenu()
 * ********/
void aMenu()
{
	clearPage();
	usleep(75000);
	cout << "Welcome to Mathew McDade's Creature Battle Arena" << endl << endl;
	cout << "There will be two players in each match." << endl;
	cout << "Each player may choose his or her creature avatar in battle." << endl << endl;
	cout << "1. Barbarian" << endl;
	cout << "2. Vampire" << endl;
	cout << "3. Blue Men" << endl;
	cout << "4. Medusa" << endl;
	cout << "5. Harry Potter" << endl;
	
	cout << "Player 1, Choose your avatar now:" << endl;
	int p1Choice = getInt(1,5);
	
	cout << "Player 2, Choose your avatar now:" << endl;
	int p2Choice = getInt(1,5);

	usleep(100000);
	clearPage();
	cout << "Players, enter the arena!" << endl;
	Arena thunderDome(p1Choice, p2Choice);
	cout << "A coinflip will decide who attacks first." << endl;
	int coinFlip = randInt(1,2);
	cout << "Coinflip: " << coinFlip << endl;
	if(coinFlip==1)
		cout << "Player 1 attacks first!" << endl << endl;
	else if(coinFlip==2)
		cout << "Player 2 attacks first!" << endl << endl;
	thunderDome.fight(coinFlip);
}

#endif

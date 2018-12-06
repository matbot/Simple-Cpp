/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 12:05:30 PDT 2016
 * *Description: Arena class header.
 * The arena class has two Creature pointers
 * and a function to make the two creatures
 * battle.
 * *********************************************/

#ifndef MMCD_ARENA_HPP
#define MMCD_ARENA_HPP

#include "creature.hpp"

class Arena
{
private:
	Creature* player1;
	Creature* player2;

public:
	Arena(int,int);
	~Arena();

	int fight(int);
};

#endif


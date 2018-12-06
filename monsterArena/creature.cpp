/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:27:06 PDT 2016
 * *Description: Pure virtual base class
 * implementation.
 * *********************************************/

#include "creature.hpp"


/************************
 * Creature Constructor
 * *********************/
Creature::Creature(int a, int s)
{
	this->armor = a;
	this->strength = s;
}

/************************
 * Creature Destructor
 * *********************/
Creature::~Creature()
{
	//virtual destructore, does nothing.
}

/******************
 * getStrength()
 * **************/
int Creature::getStrength()
{
	return strength;
}

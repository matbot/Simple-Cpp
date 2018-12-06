/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:33:57 PDT 2016
 * *Description: Blue Men implementation.
 * *********************************************/
#include "bluem.hpp"
#include "utils.hpp"
#include <iostream>
using std::cout;
using std::endl;

/********************
 * Bluem Constructor
 * *****************/
Bluem::Bluem():Creature(3,12){}

/*******************
 * Bluem Destructor
 * ****************/
Bluem::~Bluem(){}

/*********************
 * getCreature()
 * ***************/
std::string Bluem::getCreature()
{
	return "Blue Men";
}

/************
 * attack()
 * *********/
int Bluem::attack()
{
	int attackVal = (randInt(1,10) + randInt(1,10));
	cout << "Blue Men roll a " << attackVal << " attack!" << endl;
	return attackVal;
}

/***********
 * defend()
 * ********/
void Bluem::defend(int opponentAttack)
{
	int defense = 0;

	if(strength > 8) //The blue men's defense rolls are reduced based on strength.
		defense += (randInt(1,6) + randInt(1,6) + randInt(1,6));
	else if(strength > 4)
		defense += (randInt(1,6) + randInt(1,6));
	else
		defense += (randInt(1,6));
	int damage = (opponentAttack - (defense + armor));
	cout << "Blue Men roll a " << defense << " defense, have " << armor << " armor, and take ";

	if(damage>0)
	{
		cout << damage << " damage." << endl;
		strength -= damage;
	}
	else if(damage<1)
		cout << "0 damage." << endl;
	return;
}


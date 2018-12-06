/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:29:23 PDT 2016
 * *Description: Barbarian class implementation.
 * *********************************************/
#include "barb.hpp"
#include "utils.hpp"
#include <iostream>
using std::cout;
using std::endl;

/*************************
 * Barbarian Constructor
 * **********************/
Barb::Barb():Creature(0,12){}

/************************
 * Barbarian Destructor
 * *********************/
Barb::~Barb(){}

/*****************
 * getCreature()
 * **************/
std::string Barb::getCreature()
{
	return "Barbarian";
}

/************
 * attack()
 * *********/
int Barb::attack()
{
	int attackVal = (randInt(1,6) + randInt(1,6));
	cout << "Barbarian rolls a " << attackVal << " attack!" << endl;
	return attackVal;
}

/***********
 * defend()
 * ********/
void Barb::defend(int opponentAttack)
{
	int defense = (randInt(1,6) + randInt(1,6));
	int damage = (opponentAttack - defense);
	cout << "Barbarian rolls a " << defense << " defense, and takes ";
	if(damage>0)
	{
		cout << damage << " damage." << endl;
		strength -= damage;
	}
	else if(damage<1)
		cout << "0 damage." << endl;
	return;
}


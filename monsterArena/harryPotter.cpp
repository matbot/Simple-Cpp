/*****************************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:40:48 PDT 2016
 * *Description: Harry Potter class implementation.
 * *************************************************/
#include "harryPotter.hpp"
#include "utils.hpp"
#include <iostream>
using std::cout;
using std::endl;

/**************************
 * HarryPotter Constructor
 * ***********************/
HarryPotter::HarryPotter():Creature(0,10){}

/**************************
 * HarryPotter Destructor
 * ***********************/
HarryPotter::~HarryPotter(){}

/*******************
 * getCreature()
 * **************/
std::string HarryPotter::getCreature()
{
	return "Harry Potter";
}

/***********
 * attack()
 * ********/
int HarryPotter::attack()
{
	int attackVal = (randInt(1,6) + randInt(1,6));
	cout << "Harry rolls a " << attackVal << " attack!" << endl;
	return attackVal;
}

/***********
 * defend()
 * ********/
void HarryPotter::defend(int opponentAttack)
{
	int defense = (randInt(1,6) + randInt(1,6));
	int damage = (opponentAttack - defense);
	cout << "Harry rolls a " << defense << " defense, and takes ";
	if(damage>0)
	{
		cout << damage << " damage." << endl;
		strength -= damage;
	}
	else if(damage<1)
		cout << "0 damage." << endl;

	if(strength < 1 && extraLives==1)
	{	//if Harry dies, he comes back to life with 20 strength points.
		cout << "Hogwarts: Harry is dead. Long live Harry! Strength = 20!" << endl;
		strength = 20;
		extraLives = 0;
	}
	return;
}


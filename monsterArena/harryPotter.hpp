/***************************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:38:44 PDT 2016
 * *Description: Harry Potter class implementation.
 * ************************************************/
#ifndef MMCD_HARRYPOTTER_HPP
#define MMCD_HARRYPOTTER_HPP

#include "creature.hpp"

class HarryPotter: public Creature
{
private:
	int extraLives = 1; //member variable specific to Harry, decremented when special ability is used.
public:
	HarryPotter();
	~HarryPotter();

	virtual std::string getCreature();
	virtual int attack();
	virtual void defend(int);
};

#endif

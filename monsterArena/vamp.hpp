/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:30:27 PDT 2016
 * *Description: Vampire class header.
 * *********************************************/
#ifndef MMCD_VAMP_HPP
#define MMCD_VAMP_HPP

#include "creature.hpp"

class Vamp: public Creature
{
private:

public:
	Vamp();
	~Vamp();

	virtual std::string getCreature();
	bool charm(); //specific to Vampire class.
	virtual int attack();
	virtual void defend(int);
};

#endif

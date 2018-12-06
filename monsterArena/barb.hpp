/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:28:17 PDT 2016
 * *Description: Barbarian class header.
 * *********************************************/
#ifndef MMCD_BARB_HPP
#define MMCD_BARB_HPP

#include "creature.hpp"

class Barb: public Creature
{
private:

public:
	Barb();
	~Barb();

	virtual std::string getCreature();
	virtual int attack();
	virtual void defend(int);
};

#endif

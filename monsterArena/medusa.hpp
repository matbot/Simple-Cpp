/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:34:30 PDT 2016 
 * *Description: Medusa class header (sssssss).
 * *********************************************/
#ifndef MMCD_MEDUSA_HPP
#define MMCD_MEDUSA_HPP

#include "creature.hpp"

class Medusa: public Creature
{
private:

public:
	Medusa();
	~Medusa();

	virtual std::string getCreature();
	virtual int attack();
	virtual void defend(int);
};

#endif

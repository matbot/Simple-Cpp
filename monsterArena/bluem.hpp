/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:32:16 PDT 2016
 * *Description: Blue Men class header.
 * *********************************************/

#ifndef MMCD_BLUEM_HPP
#define MMCD_BLUEM_HPP

#include "creature.hpp"

class Bluem: public Creature
{
private:

public:
	Bluem();
	~Bluem();

	virtual std::string getCreature();
	virtual int attack();
	virtual void defend(int);
};

#endif

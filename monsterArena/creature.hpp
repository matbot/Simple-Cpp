/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 11:25:15 PDT 2016
 * *Description: Pure virtual base class.
 * *********************************************/

#ifndef MMCD_CREATURE_HPP
#define MMCD_CREATURE_HPP

#include <string>

class Creature
{
private:
protected: //made these variables protected so derived class may treat them as members.
	int armor;
	int strength;
public:
	Creature(int,int);
	virtual ~Creature();

	int getStrength();
	virtual std::string getCreature() = 0;
	virtual int attack() = 0;
	virtual void defend(int) = 0;
};

#endif

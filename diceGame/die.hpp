/***********************************************
 * *Author: Mathew McDade
 * *Description: Die Class header.
 * ********************************************/
#ifndef MMCD_DIE_HPP
#define MMCD_DIE_HPP
#include <string> //for string return type.

class Die
{
private:

protected:
	   int sides; //sides are private so that the derived class may have access.

public:
	   Die(); //default constructor !! should not be called in this implementation.
	   Die(int);
	   virtual std::string getType(); // virtual to LoadedDie class.
	   int getSides();
	   virtual int dieRoll(); // virtual to LoadedDie class.
};

#endif

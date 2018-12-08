/******************************************
 * *Author: Mathew McDade
 * *Description: Die Class implementation.
 * ***************************************/

#include "die.hpp"
#include "utils.hpp"

/********************
 * Die Constructors
 * *****************/
Die::Die()
{
	   this->sides = 0;
}

Die::Die(int sides)
{
	   this->sides = sides;
}

/************
 * getSides
 * *********/
int Die::getSides()
{
	   return this->sides;
}

/************
 * getType
 * *********/
std::string Die::getType()
{
	return "Normal";
}

/**************************************************************************
 * dieRoll: returns a pseudorandom integer from possible die values using
 * the randInt utility function.
 * ************************************************************************/
int Die::dieRoll()
{
	   return randInt(1, this->sides);
}


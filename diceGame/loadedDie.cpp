/*************************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct 16 16:33:15 PDT 2016
 * *Description: LoadedDie Class implementation. 
 * **********************************************/

#include "die.hpp"
#include "loadedDie.hpp"
#include "utils.hpp"

/*************************
 * LoadedDie Constructors
 * **********************/
LoadedDie::LoadedDie() : Die()
{
	   this->sides = 0;
}

LoadedDie::LoadedDie(int sides) : Die(sides)
{
	   this->sides = sides;
}

/**************
 * getType
 * **********/
std::string LoadedDie::getType()
{
	return "Loaded";
}

/***************************************
 * dieRoll: returns an average value
 * greater than the standard Die class
 * dieRoll. Algorithm uses an intial 
 * random integer between 1 and 100 to
 * limit the next randInt to a weighted
 * range subset of the die.
 * ************************************/
int LoadedDie::dieRoll()
{
	   int ifScale;
	   ifScale = randInt(100);

	   if(ifScale >= 90)
			 return this->sides;
	   else if(ifScale >= 60)
			 return randInt((this->sides * .75), (this->sides - (this->sides * .75) + 1));
	   else if(ifScale >= 45)
			 return randInt((this->sides * .5), (this->sides * .5));
	   else if(ifScale >= 0)
			 return randInt((this->sides * .25), (this->sides - (this->sides * .25) + 1));
	   return 0; //inserted to remove a pedantic error during compile.
}


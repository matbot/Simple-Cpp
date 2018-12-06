/*********************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct 16 16:26:58 PDT 2016
 * *Description: LoadedDie Class header.
 * This is a derived class of base class Die.
 * ******************************************/
#ifndef MMCD_LDIE_HPP
#define MMCD_LDIE_HPP

#include "die.hpp"

class LoadedDie : public Die
{
private:
protected:
public:
	   LoadedDie(); //default constructor not used in this implementation.
	   LoadedDie(int sides);
	   std::string getType(); //inherited virtual function.
	   int dieRoll(); //inherited virtual function that also uses the rantInt
					//utility, but weights the results for LoadedDie.
};

#endif


/*********************************************
 * *Author: Mathew McDade
 * *Description: Buffer class implementation.
 * ******************************************/
#include "buffer.hpp"
#include "utils.hpp"
#include <iostream>
using std::cout;
using std::endl;

/**************
 * Constructor
 * ***********/
Buffer::Buffer(int cycles, int addChance, int remChance)
{
	this->cycles = cycles;
	this->addChance = addChance;
	this->remChance = remChance;
}

/***************************************
 * runBuffer(): using user input values,
 * runs for a specified number of cycles
 * with a specified chance of adding a 
 * value and removing a value from the 
 * queue. The length of the queue is 
 * taken at the end of each cycle,
 * and the average length is returned.
 * *************************************/
int Buffer::runBuffer()
{
	int sizeSum = 0;
	int currentCycle = 1;

	while(currentCycle<=cycles)
	{
		int add = randInt(100);
		if(add<addChance)
			buffer.push(add);
		
		int rem = randInt(100);
		if(!buffer.empty())
			if(rem<remChance)
				buffer.pop();

		sizeSum += buffer.size();
		currentCycle++;
	}
	return sizeSum/cycles;
}



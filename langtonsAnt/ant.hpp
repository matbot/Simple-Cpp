/********************
 * Ant class header
 * *****************/
#ifndef ANT_HPP
#define ANT_HPP

#include "ant.hpp"
#include "antBoard.hpp"

enum Position { Center=1, Random, Custom };

class Ant
{
private:
	   int antX;
	   int antY;
	   int totalSteps;
	   Direction facing;
	   AntBoard* bord;
public:
	   Ant(int, int, Direction, Position, AntBoard*);
	   void turnLeft();
	   void turnRight();
	   void antRun();
};
#endif

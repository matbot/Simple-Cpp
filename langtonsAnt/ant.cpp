/**********************************************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct  9 14:44:00 PDT 2016
 * *Description: This is the Ant class implementation. It includes the
 * Ant object constructor and the necessary algorithm elements for
 * the Langton's Ant automaton.
 * *******************************************************************/
#include "antBoard.hpp"
#include "ant.hpp"
#include "utils.hpp"
#include <iostream>
#include <unistd.h> //for usleep() function
using std::endl;
using std::cout;
/***********************
 * ant constructor
 * ********************/
Ant::Ant(int s, int tS, Direction f, Position sP, AntBoard* b)
{
	   bord = b;
	   facing = f;
	   totalSteps = tS;

	   if(sP==Center)
	   {
			 antX = s/2;
			 antY = s/2;
	   }
	   else if(sP==Random)
	   {
			 antX = randInt(s-1);
			 antY = randInt(s-1);
	   }
	   else if(sP==Custom)
	   {
			 std::cout << "Please enter a row value: " << endl;
			 antX = getInt(s);
			 std::cout << "Please enter a column value: " << endl;
			 antY = getInt(s);
	   }

	   if(b->getColor(antX,antY)==White)
			 b->setColor(antX,antY,Want);
	   else if(b->getColor(antX,antY)==Black)
			 b->setColor(antX,antY,Bant);
}

/*********************
 * turning functions
 * ******************/
void Ant::turnLeft()
{
	   if(facing==Up)
			 facing = Left;
	   else if(facing==Left)
			 facing = Down;
	   else if (facing==Down)
			 facing = Right;
	   else if (facing==Right)
			 facing = Up;
}

void Ant::turnRight()
{
	   if(facing==Up)
			 facing = Right;
	   else if(facing==Right)
			 facing = Down;
	   else if(facing==Down)
			 facing = Left;
	   else if(facing==Left)
			 facing = Up;
}

/**************************************************************
 * antRun function: this function contains the primary running
 * algorithm for the Langton's Ant implementation.
***************************************************************/
void Ant::antRun()
{
	   int currentStep = 1;
	   while(currentStep!=totalSteps)
	   {
			 if(bord->getColor(antX,antY)==Bant)
				    bord->setColor(antX,antY,White);
			 else if(bord->getColor(antX,antY)==Want)
				    bord->setColor(antX,antY,Black);

			 if(facing==Up)
				    antX-=1;
			 else if(facing==Down)
				    antX+=1;
			 else if(facing==Left)
				    antY-=1;
			 else if(facing==Right)
				    antY+=1;

			 if(bord->getColor(antX,antY)==Black)
			 {
				    bord->setColor(antX,antY,Bant);
				    turnLeft();
			 }
			 else if(bord->getColor(antX,antY)==White)
			 {
				    bord->setColor(antX,antY,Want);
				    turnRight();
			 }

			 if(antX==0 || antY==0)
			 {
				    bord->expandBoard(Up);
				    antX+=10;
				    antY+=10;
			 }
			 else if(antX==bord->getSize()-1 || antY==bord->getSize()-1)
				    bord->expandBoard(Down);

			 currentStep++;
			 bord->clearBoard();
			 bord->printBoard();
			 cout << "Current Step: " << currentStep << endl;
			 usleep(bord->getSize()*2500);
	   }
}

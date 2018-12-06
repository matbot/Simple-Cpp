/************************************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct  9 15:07:43 PDT 2016
 * *Description: The main function for my Langton's Ant.
 * *********************************************************/
#include "ant.hpp"
#include "antBoard.hpp"
#include "utils.hpp"
#include "antMenu.hpp"

#include <iostream>
int main()
{
	   int sz;
	   Color c;
	   antBoardMenu(sz,c);
	   AntBoard brd(sz,c);
	   AntBoard* board;
	   board = &brd;
	   int t;
	   Direction f;
	   Position p;
	   antMenu(t, f, p);
	   Ant ant(sz, t, f, p, board);
	   ant.antRun();
	   return 0;
}

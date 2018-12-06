/************************************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct  9 14:52:18 PDT 2016
 * *Description: This is the AntBoard class implementation.
 * It includes functions used for interacting with the board
 * object.
 * *********************************************************/
#include <iostream>
#include "antBoard.hpp"
#include "utils.hpp"

using std::endl;
using std::cout;

/**************
 * Constructor
 *************/
AntBoard::AntBoard(int s, Color c)
{
	   size = s;
	   startingColor = c;

	   antBoard = new Color*[size];
	   for(int i=0;i<size;i++)
			 antBoard[i] = new Color[size];

	   if(c == White)
			 for(int i=0;i<size;i++)
				    for(int j=0;j<size;j++)
						  antBoard[i][j] = White;
	   if(c == Black)
			 for(int i=0;i<size;i++)
				    for(int j=0;j<size;j++)
						  antBoard[i][j] = Black;
}

/***************************************************************
 * Destructor //I enjoyed implementing the use of a destructor
 * here in order to prevent a memory leak from the dynamically
 * allocated board object.
 * ************************************************************/
AntBoard::~AntBoard()
{
	   for(int i=0;i<size;i++)
			 delete[] antBoard[i];
	   delete[] antBoard;
}

/*****************
 * set functions
 * **************/
void AntBoard::setSize(int s)
{
	   size = s;
}

void AntBoard::setColor(int x, int y, Color c)
{
	   antBoard[x][y] = c;
}

/*****************
 * get functions
 * **************/
int AntBoard::getSize()
{
	   return size;
}

Color AntBoard::getColor(int x, int y)
{
	   return antBoard[x][y];
}
	   
/****************************
 * antBoard::clearBoard
 * used to clear the output
 * before each reprint of 
 * antBoard.
 * *************************/
void AntBoard::clearBoard()
{
	   cout << "\033[2J\033[1;1H"; //got this clever output clear sequence
}							//from TA Waldron in the discussion board.

/*****************************************************************
 * AntBoard::printBoard "\u25A1"b "\u25A0"w, "\u2731"or "\u2732"a
 * I searched out some Unicode characters to make the board a 
 * little more visually interesting.
 * **************************************************************/
void AntBoard::printBoard()
{
	   for(int i=0;i<size;i++)
	   {
			 for(int j=0;j<size;j++)
			 {
				    if(antBoard[i][j]==White)
						  cout << "\u25A0" << " ";
				    else if(antBoard[i][j]==Black)
						  cout << "\u25A1" << " ";
				    else if (antBoard[i][j]==Want || antBoard[i][j]==Bant)
						  cout << "\u2732" << " ";
			 }
			 cout << endl;
	   }
	   //cout << endl;
}


/*********************************************************
 * AntBoard::expandBoard
 * Writing this function was a great learning experience
 * for the use of dynamic memory in a 2d array.
 * ******************************************************/
void AntBoard::expandBoard(Direction d)
{
	   Color** tempBoard;
	   tempBoard = new Color* [size + 10];
	   for(int i=0;i<size+10;i++)
			 tempBoard[i] = new Color[size + 10];

	   if(d==Up)
	   {
			 for(int i=0;i<size;i++)
				    for(int j=0;j<size;j++)
						  tempBoard[i + 10][j + 10] = antBoard[i][j];
			 for(int i=0;i<10;i++)
				    for(int j=0;j<size+10;j++)
				    {
						  tempBoard[i][j] = startingColor;
						  tempBoard[j][i] = startingColor;
				    }
	   }
	   else if(d==Down)
	   {
			 for(int i=0;i<size;i++)
				    for(int j=0;j<size;j++)
						  tempBoard[i][j] = antBoard[i][j];
			 for(int i=size;i<size+10;i++)
				    for(int j=0;j<size+10;j++)
				    {
						  tempBoard[i][j] = startingColor;
						  tempBoard[j][i] = startingColor;
				    }
	   }
	   
	   for(int i=0;i<size;i++)
			 delete[] antBoard[i];
	   delete[] antBoard;

	   antBoard = tempBoard;

	   size+=10;
}

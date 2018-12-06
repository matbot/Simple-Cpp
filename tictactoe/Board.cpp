/**********************************************
 * Name: Mathew McDade
 * Date: Mon May 23 19:28:52 PDT 2016
 * Description: Board class member function
 * implementation section.
 * ********************************************/
#include "Board.hpp"
#include <iostream>
#include <cctype>
using std::cin;
using std::cout;
using std::endl;

/**********************************************
 * 		Board::Board
 *Default constructor for Board class objects.
* Loops throught the 3 x 3 array setting all
* values to the . placeholder. Also initializes
* a counter to 0.
**********************************************/
Board::Board()
{
	moveCounter = 0;
	for(int i=0;i<3;i++)
		for(int j=0;j<3;j++)
			boardArray[i][j]='.';
}

/************************************************
 * 		Board::print
 * Prints the current game board to the screen.
************************************************/
void Board::print()
{
	cout<<endl<<endl<<"  0 1 2"<<endl;
	for(int row=0;row<3;row++)
		cout << row << " " << boardArray[row][0] << " " << boardArray[row][1] << " " << boardArray[row][2] << endl;
	cout<<endl<<endl;
	return;
}

/************************************************
 * 		Board::makeMove
 * The user enters two integers, a row then a
 * column, and if the space is not taken, the
 * players mark is entered into the Board array
 * and a value of true is returned.
 * *********************************************/
bool Board::makeMove(int row, int column, char p)
{
	if(boardArray[row][column] == '.')
	{	
		boardArray[row][column] =toupper(p);
		moveCounter++;
		return true;
	}
	else
		return false;
}

/****************************************
 * 	Board::gameState();
 * Tests the array for possible winning
 * conditions, then returns the current
 * game state using enum values.
 * *************************************/
GameState Board::gameState()
{
	if(moveCounter >= 5)
	{
		if(boardArray[0][0]==boardArray[1][1] && boardArray[1][1]==boardArray[2][2])
		{
			if(boardArray[0][0]=='X')
				return X_WON;
			else if(boardArray[0][0]=='O')
				return O_WON;
		}
		if(boardArray[3][0]==boardArray[2][2] && boardArray[2][2]==boardArray[0][3])
		{
			if(boardArray[3][0]=='X')
				return X_WON;
			else if(boardArray[3][0]=='O')
				return O_WON;
		}
		for(int i=0;i<3;i++)
		{
			if(boardArray[i][0]==boardArray[i][1] && boardArray[i][1]==boardArray[i][2])
			{
				if(boardArray[i][0]=='X')
					return X_WON;
				else if(boardArray[i][0]=='O')
					return O_WON;
			}
			if(boardArray[0][i]==boardArray[1][i] && boardArray[1][i]==boardArray[2][i])
			{
				if(boardArray[0][i]=='X')
					return X_WON;
				else if(boardArray[0][i]=='O')
					return O_WON;
			}
		}
	}
	if(moveCounter<9)
		return UNFINISHED;
	else
		return DRAW;
}

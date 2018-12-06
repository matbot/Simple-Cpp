/*****************************************************
 * Name: Mathew McDade
 * Date: Thu May 19 22:34:15 PDT 2016
 * Description: This is the Board class declaration. 
 * It includes all class variables and member
 * function prototypes.
 * **************************************************/
#ifndef BOARD_HPP
#define BOARD_HPP
using namespace std;

enum GameState { X_WON, O_WON, DRAW, UNFINISHED };

class Board
{
	private:
		char boardArray[3][3];
		int moveCounter;
	public:
		Board();
		
		bool makeMove(int, int, char);
		GameState gameState();
		void print();
};
#endif

/*************************************************
 * Name: Mathew McDade
 * Date: Tue May 24 18:22:07 PDT 2016
 * Description: This is the TicTacToe game class
 * header. It allows two people to play a game 
 * using a Board class object.
 * **********************************************/
#ifndef TICTACTOE_HPP
#define TICTACTOE_HPP
#include "Board.hpp"
#include <cctype>


class TicTacToe
{
	private:
		Board game;
		char whoseMove;
	public:
		TicTacToe(char);
		
		void play();
};
#endif

/****************************************************
 * Name: Mathew McDade
 * Date: Tue May 24 19:27:55 PDT 2016
 * Description: TicTacToe class member function
 * implementation section. This file also include a 
 * main method for playing the game.
 * *************************************************/
#include "TicTacToe.hpp"
#include <cctype>
#include <iostream>
using std::cin;
using std::cout;
using std::endl;

/***************************************
 * 	TicTacToe::TicTacToe
 * The default constructor for a game
 * of TicTacToe. It takes the char
 * of the first player to start.
 ***************************************/
TicTacToe::TicTacToe(char firstMover)
{
	if(toupper(firstMover)=='X')
		whoseMove='X';
	else if(toupper(firstMover)=='O')
		whoseMove='O';
	else
		whoseMove='X';
}

/*****************************************
 * 	TicTacToe::play
 ****************************************/
void TicTacToe::play()
{
	int x,y;
	while(game.gameState()==UNFINISHED)
	{
		game.print();
		cout<<"Player "<< whoseMove << ": please enter your move."<<endl;
		cin>>x>>y;
		if(game.makeMove(x,y,whoseMove)==true)
		{
			game.gameState();
			if(whoseMove=='X')
				whoseMove='O';
			else if(whoseMove=='O')
				whoseMove='X';
		}
		else
			cout<<"Square is occupied. Please try again:"<<endl;
	}

	game.print();
	
	if(game.gameState()==X_WON)
		cout<<"Player X Won!"<<endl<<endl<<endl;
	else if(game.gameState()==O_WON)
		cout<<"Player O Won!"<<endl<<endl<<endl;
	else if(game.gameState()==DRAW)
		cout<<"It was a draw..."<<endl<<endl<<endl;
return;
}




/****************************************************
 * 	TicTacToe	The Main Method
 ***************************************************/
int main()
{
	cout<<"Which player will go first? X or O?"<<endl;
	char firstMover;
	cin>>firstMover;
	TicTacToe thisGame(firstMover);
	thisGame.play();
return 0;
}


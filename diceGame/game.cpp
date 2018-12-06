/*******************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct 16 16:52:25 PDT 2016
 * *Description: Game Class implementation
 * *****************************************/

#include <iostream>
#include <unistd.h> //for usleep(); very important to space die rolls for rand().
#include "die.hpp"
#include "loadedDie.hpp"
#include "game.hpp"

/*********************
 * Game Constructor
 * ******************/
Game::Game(int turns, int p1Sides, int p2Sides, Loadedness p1Type, Loadedness p2Type)
{
	this->totalTurns = turns;
	this->player1Score = 0;
	this->player2Score = 0;

	if(p1Type == Normal)	//allocate based on user input.
		   this->player1Die = new Die(p1Sides);
	else if(p1Type == Loaded)
		   this->player1Die = new LoadedDie(p1Sides);

	if(p2Type == Normal)
		   this->player2Die = new Die(p2Sides);
	else if(p2Type == Loaded)
		   this->player2Die = new LoadedDie(p2Sides);
}

/*******************************************************
 * Game Destructor: frees dynamically allocated memory.
 * ****************************************************/
Game::~Game()
{
	   delete player1Die;
	   player1Die = NULL;
	   delete player2Die;
	   player2Die = NULL;
}

/**********
 * runGame
 * *******/
void Game::runGame()
{
	   clearPage();
	   std::cout << "Time to play the game!!" << std::endl;
	   std::cout << "\u2680" << "\u2681" << "\u2682" << "\u2683" << "\u2684" 
		   << "\u2685" << std::endl << std::endl; //little Unicode flair.

	   for(int i=1;i<=this->totalTurns;i++)
	   {
			 int p1Roll;
			 int p2Roll;
			 std::cout << "Round: " << i << std::endl;
			 usleep(1000000);

			 p1Roll = player1Die->dieRoll();
			 std::cout << "Player 1 rolls: " << p1Roll << std::endl;
			 usleep(1000000);

			 p2Roll = player2Die->dieRoll();
			 std::cout << "Player 2 rolls: " << p2Roll << std::endl;
			 usleep(1000000);

			 if(p1Roll > p2Roll)
			 {
				    std::cout << "Player 1 wins the round!" << std::endl;
				    this->player1Score++;
			 }
			 else if(p2Roll > p1Roll)
			 {
				    std::cout << "Player 2 wins the round!" << std::endl;
				    this->player2Score++;
			 }
			 else if(p2Roll == p1Roll)
				    std::cout << "Tie Round" << std::endl;
			 usleep(1000000);
			 std::cout << std::endl;
	   }

	   usleep(500000);
	   clearPage();

	   std::cout << "Game Score Report:" << std::endl << std::endl;
	   std::cout << "Rounds Played: " << this->totalTurns << std::endl;

	   std::cout << "Player 1 won " << this->player1Score << " rounds with a " <<
			this->player1Die->getSides() << " sided, " <<  
			this->player1Die->getType() << " die." << std::endl;
	   std::cout << "Player 2 won " << this->player2Score << " rounds with a " <<
			this->player2Die->getSides() << " sided, " <<  
			this->player2Die->getType() << " die." << std::endl;

	   if(this->player1Score > this->player2Score)
			 std::cout << "Player 1 Wins!!" << std::endl;
	   else if(this->player2Score > this->player1Score)
			 std::cout << "Player 2 Wins!!" << std::endl;
	   else if(this->player1Score == this->player2Score)
			 std::cout << "Twas a Tie..." << std::endl;
}



/****************************************
 * *Author: Mathew McDade
 * *Description: Game Class header.
 * *************************************/
#ifndef MMCD_GAME_HPP
#define MMCD_GAME_HPP

#include "die.hpp"
#include "loadedDie.hpp"
#include "utils.hpp"

enum Loadedness { Normal=1, Loaded }; //parameter used to dynamically instantiate
								//Die vs. LoadedDie objects.
class Game
{
private:
	   int totalTurns;
	   int player1Score;
	   int player2Score;
	   Die* player1Die; //these Die class pointers can point to a Die or
	   Die* player2Die; //a LoadedDie class object and access member,inherited and
					//virtual functions.
public:
	   Game(int, int, int, Loadedness, Loadedness);
	   ~Game(); //need explicit destructor to prevent memory leak from
				//dynamically allocated Die objects.
	   void runGame();
};
#endif

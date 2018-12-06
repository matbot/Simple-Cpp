/****************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct 16 17:19:44 PDT 2016 
 * *Description: The Main Method 
 * *************************************/
//#include <unistd.h>
//#include <iostream>
#include "die.hpp"
#include "loadedDie.hpp"
#include "game.hpp"
#include "gameMenu.hpp"
#include "utils.hpp"

using namespace std;

int main()
{
	int turns;
	int p1Sides;
	int p2Sides;
	Loadedness p1Type;
	Loadedness p2Type;

	gameMenu(turns, p1Sides, p2Sides, p1Type, p2Type);
	Game game(turns, p1Sides, p2Sides, p1Type, p2Type);
	game.runGame();
	
	return 0;
}

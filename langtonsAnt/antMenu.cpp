/*************************************************************************
 * *Author: Mathew McDade
 * *Date: Sun Oct  9 15:00:44 PDT 2016
 * *Description: This if the function implementation section for the menu
 * functions that get the user input for initialization variables for the
 * Ant and AntBoard class objects.
 * **************************************************************************/
#include <iostream>
#include <unistd.h>
#include "antBoard.hpp"
#include "ant.hpp"
#include "utils.hpp"

using std::cin;
using std::cout;
using std::endl;

void antBoardMenu(int &s, Color &c)
{
	   clearPage();
	   cout << "Welcome to Mathew McDade's implementation of the Langton's Ant Cellular Automaton!" << endl;
	   usleep(1000000);
	   cout << "You will begin with a square playing board. You can select any size you want, such as 10, for a 10 x 10 board, or 25, for a 25 x 25 board, and the board will expand as needed to fit the simulation. A good beginning size is 50 x 50." << endl << endl << "Please select a beginning size for the sqaure playing board now: " << endl;
	   s = getInt();
	   usleep(1000000);

	   cout << "The next step is to choose a starting color for your board." << endl << "You can choose to start with a White board or a Black board." << endl << endl;
	   usleep(1000000);
	   cout << "1. White Board" << endl;
	   cout << "2. Black Board" << endl;
	   cout << "Enter your choice:" << endl;
	   c = static_cast<Color>(getInt(1,2)); //I used static cast in these functions so that I could use the getInt function with my enumerated data types
}

void antMenu(int &turns, Direction &facing, Position &position)
{
	   cout << "The next step is to choose a total number of turns for the ant to run." << endl;
	   usleep(1000000);
	   cout << "Given the solid boards available, the ant's pattern will follow a predictable pattern that are best seen with 200 moves for early symmetry, 1000 moves for chaotic patterns, and 11000 for emergent order." << endl;
	   usleep(1000000);
	   cout << "Please enter a number of moves as a positive integer:" << endl;
	   turns = getInt(20000);

	   cout << "Now you can select which direction the ant will start facing." << endl;
	   usleep(1000000);
	   cout << "1. Up" << endl;
	   cout << "2. Down" << endl;
	   cout << "3. Left" << endl;
	   cout << "4. Right" << endl;
	   cout << "Please enter your choice:" << endl;
	   facing = static_cast<Direction>(getInt(1,4));

	   cout << "Finally, you can select a starting position for the ant." << endl;
	   usleep(1000000);
	   cout << "Your choice of a starting point won't change the final pattern determined by the number of steps, but you can choose from starting at the center of your board, a random location on the board, or a custom space on the board." << endl << endl;
	   cout << "1. Center" << endl;
	   cout << "2. Random" << endl;
	   cout << "3. Custom" << endl;
	   cout << "Please enter your choice:" << endl;
	   position = static_cast<Position>(getInt(1,3));
	   usleep(1000000);
}

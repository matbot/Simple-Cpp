/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 12:06:57 PDT 2016
 * *Description: Arena class implementation.
 * *********************************************/
#include "arena.hpp"
#include "creature.hpp"
#include "vamp.hpp"
#include "barb.hpp"
#include "bluem.hpp"
#include "medusa.hpp"
#include "harryPotter.hpp"
#include "utils.hpp"
#include <iostream>
#include <unistd.h> //for usleep functionality.

using std::cin;
using std::cout;
using std::endl;

Arena::Arena(int p1, int p2) //constructor takes ints, as opposed to Creature* arguments
{						//to make testing with array loops easier.
	switch(p1){
		case 1: player1 = new Barb();
			   break;
		case 2: player1 = new Vamp();
			   break;
		case 3: player1 = new Bluem();
			   break;
		case 4: player1 = new Medusa();
			   break;
		case 5: player1 = new HarryPotter();
			   break; }
	switch(p2){
		case 1: player2 = new Barb();
			   break;
		case 2: player2 = new Vamp();
			   break;
		case 3: player2 = new Bluem();
			   break;
		case 4: player2 = new Medusa();
			   break;
		case 5: player2 = new HarryPotter();
			   break; }
}

Arena::~Arena()
{
	delete player1;
	delete player2;
}

int Arena::fight(int first) //fight takes an int to indicate which player should attack first.
{
	if(first==1)
	{
		while(player1->getStrength()>0 && player2->getStrength()>0)
		{
			cout << "Player 1:" << endl;
			int attack = player1->attack();
			usleep(75000);
			if(attack==0)
			{
				cout << "Player 1 Wins!" << endl;
				return 1;
			}
			else
			{
				cout << "Player 2:" << endl;
				player2->defend(attack);
				usleep(75000);
			}
			if(player2->getStrength()<1)
			{
				cout << "Player 1 Wins!" << endl;
				return 1;
			}
			cout << endl;
			usleep(1000000);


			cout << "Player 2:" << endl;
			attack = player2->attack();
			usleep(75000);
			if(attack==0)
			{
				cout << "Player 2 Wins!" << endl;
				return 2;
			}
			else
			{
				cout << "Player 1:" << endl;
				player1->defend(attack);
				usleep(75000);
			}
			if(player1->getStrength()<1)
			{
				cout << "Player 2 Wins!" << endl;
				return 2;
			}
			cout << endl;
			usleep(1000000);
		}
	}
	else if(first==2)
	{
		while(player2->getStrength()>0 && player1->getStrength()>0)
		{
			cout << "Player 2:" << endl;
			int attack = player2->attack();
			usleep(75000);
			if(attack==0)
			{
				cout << "Player 2 Wins!" << endl;
				return 2;
			}
			else
			{
				cout << "Player 1:" << endl;
				player1->defend(attack);
				usleep(75000);
			}
			if(player1->getStrength()<1)
			{
				cout << "Player 2 Wins!" << endl;
				return 2;
			}
			cout << endl;
			usleep(1000000);


			cout << "Player 1:" << endl;
			attack = player1->attack();
			usleep(75000);
			if(attack==0)
			{
				cout << "Player 1 Wins!" << endl;
				return 1;
			}
			else
			{
				cout << "Player 2:" << endl;
				player2->defend(attack);
				usleep(75000);
			}
			if(player2->getStrength()<1)
			{
				cout << "Player 1 Wins!" << endl;
				return 1;
			}
			cout << endl;
			usleep(1000000);
		}
	}
	return 0;
}

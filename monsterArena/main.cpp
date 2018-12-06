/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov  5 12:19:08 PDT 2016
 * *Description: Main method and testing driver.
 * *********************************************/
#include "aMenu.hpp"
#include "arena.hpp"
#include "creature.hpp"

#include <iostream>
#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL)); //rand seeded here to provide more varied pseudorandom int generation.
	aMenu();
	
	/************************!!!!!Test Driver Battle Royale!!!!!********************************
	 * ***battle commentary and time delays were manually disabled during driver testing********
	 * otherwise, it would take a long time and testing output would need to be directed to a **
	 * separate output to distinguish it from gameplay output.*********************************/

	/*cout << "Driver Key: 1.Barbarian, 2.Vampire, 3.Blue Men, 4.Medusa, 5.HarryPotter" << endl;

	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			int p1wins = 0;
			int p2wins = 0;
			for(int k=0;k<1000000;k++)
			{
				Arena a(i,j);
				int winner = a.fight(2);
				if(winner==1)
					p1wins++;
				else if(winner==2)
					p2wins++;
			}
			cout << "p1: " << i << " wins: " << p1wins << endl;
			cout << "p2: " << j << " wins: " << p2wins << endl;
			if(p1wins>p2wins)
				cout << "p1 wins " << (p1wins/1000000.0)*100 << " percent of matches." << endl;
			if(p2wins>p1wins)
				cout << "p2 wins " << (p2wins/1000000.0)*100 << " percent of matches." << endl;
		}
		cout << endl;
	}*/
	return 0;
}

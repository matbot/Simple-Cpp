/***************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov 26 04:00:18 PST 2016
 * *Description: Buffer class header.
 * ************************************/
#ifndef MMCD_BUFF_HPP
#define MMCD_BUFF_HPP

#include <queue>
using std::queue;

class Buffer
{
private:
	int cycles;
	int addChance;
	int remChance;
	queue<int> buffer;
public:
	Buffer(int,int,int);
	~Buffer(){};

	int runBuffer();
};
#endif

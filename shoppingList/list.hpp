/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Oct 22 16:25:10 PDT 2016
 * *Description: This is the List class header.
 * *********************************************/

#ifndef MMCD_LIST_HPP
#define MMCD_LIST_CPP

#include "item.hpp"

class List
{
private:
	int arraySize;
	int arrayItems;
	Item* itemAryPtr; //dynamic array of Item objects.
public:
	List();
	~List();
	void listMenu();
	void addItem();
	void removeItem();
	void expandItemArray(); //dynamically expands the Item array.
	void printList();
};

#endif

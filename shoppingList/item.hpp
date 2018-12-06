/*********************************************
 * *Author: Mathew McDade
 * *Date: Sat Oct 22 16:12:37 PDT 2016
 * *Description: This is the Item class header.
 * *********************************************/
#ifndef MMCD_ITEM_HPP
#define MMCD_ITEM_HPP

#include <string>
using std::string;

class Item
{
private:
	string itemName;
	string itemUnit;
	int itemQuantity;
	float itemPrice;
public:
	Item(string,string,int,float);
	Item();
	~Item(); //used for debugging.

	string getName();
	string getUnit();
	int getQuantity();
	float getPrice();
	float getExtPrice();

	void setName(string);
	void setUnit(string);
	void setQuantity(int);
	void setPrice(float);

	void addQuantity();
	void changeQuantity();

	void setItem(string, string, int, float);

	friend bool operator==(Item,Item); //overloaded == operator to compare Item objects based on
	friend bool operator!=(Item,Item);		//itemName.
};

#endif
	

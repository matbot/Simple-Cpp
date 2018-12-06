/********************************************************
 * *Author: Mathew McDade
 * *Date: Sat Oct 22 16:20:52 PDT 2016
 * *Description: This is the Item class implementation.
 * It contains all member functions for the Item
 * class, including operator overloading.
 * *****************************************************/

#include "item.hpp"
#include "utils.hpp"
#include <string>
#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::string;

/**************
 * Construtors
 * ***********/
Item::Item(string name, string unit, int quantity, float price)
{
	this->itemName = name;
	this->itemUnit = unit;
	this->itemQuantity = quantity;
	this->itemPrice = price;
}

Item::Item()
{
	this->itemName = "empty";
	this->itemUnit = "empty";
	this->itemQuantity = 0;
	this->itemPrice = 0;
}

/**************
 * Destructor
 * ***********/
Item::~Item()
{
}

/***************
 * getFunctions
 * ************/
string Item::getName()
{
	return itemName;
}

string Item::getUnit()
{
	return itemUnit;
}

int Item::getQuantity()
{
	return itemQuantity;
}

float Item::getPrice()
{
	return itemPrice;
}

float Item::getExtPrice()
{
	return (itemPrice * itemQuantity);
}

/***************
 * setQuantity
 * ************/
void Item::setQuantity(int quantity)
{
	this->itemQuantity = quantity;
}

/**************
 * setItem
 * *********/
void Item::setItem(string n, string u, int q, float p)
{
	this->itemName = n;
	this->itemUnit = u;
	this->itemQuantity = q;
	this->itemPrice = p;
}

/***************************
 * Extra quantity functions
 * ************************/
void Item::addQuantity()
{
	cout << "How many units would you like to add to " << this->itemName << " ?" << endl;
	int quant = getInt();
	this->itemQuantity += quant;
}

void Item::changeQuantity()
{
	cout << "How many units of " << this->itemName << " do you want?" << endl;
	int quant = getInt();
	this->itemQuantity = quant;
}

/************************
 * Overloaded Operators
 * *********************/
bool operator==(Item left, Item right)
{
	return left.getName()==right.getName();
}

bool operator!=(Item left, Item right)
{
	return left.getName()!=right.getName();
}

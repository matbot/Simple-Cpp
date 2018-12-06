/****************************************************
 * Author: Mathew McDade
 * Date: Tue May 17 14:36:20 PDT 2016
 * Description: Item member function implementation
 * section.
 * *************************************************/
#include "Item.hpp"
#include <string>
using namespace std;

/***************************************************
 * 	Item::Item(with parameters)
 * This is the item class constructor that takes
 * a string, double, and int as parameters.
 * ************************************************/
Item::Item(string nameInput, double priceInput, int quantityInput)
{
	setName(nameInput);
	setPrice(priceInput);
	setQuantity(quantityInput);
}

/***********************************
 * 	Item::Item()
 * Item class default constructor.
 * ********************************/
Item::Item()
{
	setName("");
	setPrice(0);
	setQuantity(0);
}

/*********************************
 * 	Item::setName
 * Function to set name variable.
 * *******************************/
void Item::setName(string nameInput)
	{ name = nameInput; }

/*********************************
 * 	Item::setPrice
 * Function to set price variable.
 * *******************************/
void Item::setPrice(double priceInput)
	{ price = priceInput; }

/************************************
 * 	Item::setQuantity
 * Function to set quantity variable.
 * **********************************/
void Item::setQuantity(int quantityInput)
	{ quantity = quantityInput; }

/**************************************
 * 	Item::getName
 * Function that returns name variable.
 * ************************************/
string Item::getName() const
	{ return name; }

/***************************************
 * 	Item::getPrice
 * Function that returns price variable.
 * *************************************/
double Item::getPrice() const
	{ return price; }

/******************************************
 * 	Item::getQuantity
 * Function that returns quantity variable.
 * ****************************************/
int Item::getQuantity() const
	{ return quantity; }


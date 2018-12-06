/****************************************************
 * Author: Mathew McDade
 * Date: Tue May 17 17:30:22 PDT 2016
 * Description: ShoppingCart class member function
 * implementation section.
 * ************************************************/
#include "ShoppingCart.hpp"
#include <cstdlib>
using namespace std;

/******************************************************
 * 	ShoppingCart::ShoppingCart(default)
 * Default constructor initializes all Item pointers
 * in the array to NULL and the arrayEnd variable to 0.
 * ****************************************************/
ShoppingCart::ShoppingCart()
{
	arrayEnd = 0;
	for(int cartItem = 0;cartItem < 100;cartItem++)
	{
		itemsArray[cartItem] = NULL;
	}
}

/*************************************************
 * 	ShoppingCart::addItem
 * Function to add an item pointer to itemsArray.
 * ***********************************************/
void ShoppingCart::addItem(Item *item)
{
	itemsArray[arrayEnd] = item;
	arrayEnd++;
}

/*********************************************
 * 	ShoppingCart::totalPrice
 * Calculates the total price of items in the 
 * shopping cart object.
 * *******************************************/
double ShoppingCart::totalPrice()
{
	double total = 0;
	for(int cartItem = 0; cartItem  < arrayEnd; cartItem++)
	{
		total += (itemsArray[cartItem]->getPrice() * itemsArray[cartItem]->getQuantity());
	}
	return total;
}

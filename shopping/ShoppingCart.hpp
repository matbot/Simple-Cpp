/********************************************
 * Author: Mathew McDade
 * Date: Tue May 17 17:00:08 PDT 2016
 * Description: This is the ShoppingCart 
 * class declaration. It includes all
 * member variables and function prototypes.
 * *****************************************/
#ifndef SHOPPINGCART_HPP
#define SHOPPINGCART_HPP
#include "Item.hpp"
using namespace std;

class ShoppingCart
{
	private:
		Item* itemsArray[100];
		int arrayEnd;
	public:
		ShoppingCart();
		void addItem(Item*);
		double totalPrice();
};
#endif

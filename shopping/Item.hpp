/***************************************************
 * Author: Mathew McDade
 * Date: Tue May 17 14:21:38 PDT 2016
 * Description: This is the item class declaration.
 * It includes all class variables and member 
 * functions.
 * ************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP
#include <string>
using namespace std;

class Item
{
	private:
		string name;
		double price;
		int quantity;
	public:
		Item(string,double,int);
		Item();

		void setName(string);
		void setPrice(double);
		void setQuantity(int);

		string getName() const;
		double getPrice() const;
		int getQuantity() const;
};
#endif

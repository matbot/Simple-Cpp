#include <iostream>
#include <string>
#include "Item.hpp"
using namespace std;

int main()
{
	Item item1("dog",12.25, 9);
	Item item2;

	cout<<item1.getName()<<endl<<item1.getPrice()<<endl<<item1.getQuantity()<<endl;
	cout<<item2.getName()<<endl<<item2.getPrice()<<endl<<item2.getQuantity()<<endl;
return 0;
}

#include "ShoppingCart.hpp"
#include "Item.hpp"
#include <iostream>
using namespace std;

int main()
{
	Item f;
	Item a("affidavit", 1.5, 12);
      	Item b("Bildungsroman", 1, 20);
      	Item c("capybara", 1, 6);
      	Item d("dir", 1, 16);
	Item e("mathew", 100, 1);
      	ShoppingCart sc1;
	sc1.addItem(&f);
      	sc1.addItem(&a);
      	sc1.addItem(&b);
      	sc1.addItem(&c);
      	sc1.addItem(&d);
	sc1.addItem(&e);
	
      	double diff = sc1.totalPrice();
	cout << diff<<endl;
	ShoppingCart sc2;
	diff = sc2.totalPrice();
	cout<<diff<<endl;
return 0;
}

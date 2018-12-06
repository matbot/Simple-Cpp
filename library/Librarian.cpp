#include <iostream>
#include <vector>
#include <string>
#include "Library.hpp"
using namespace std;

int main()
{
Book b1("123","War and Peace","Tolstoy");
Book b2("234","Moby Dick","Melville");
Book b3("345","Phantom Tollbooth","Juster");
Patron p1("abc","Felicity");
Patron p2("bcd","Waldo");
cout<<b1.getIdCode()<<endl<<b1.getTitle()<<endl<<b1.getAuthor()<<endl;
cout<<p1.getIdNum()<<endl<<p1.getName()<<endl;


Library lib;
lib.addBook(&b1);
lib.addBook(&b2);
lib.addBook(&b3);
lib.addPatron(&p1);
lib.addPatron(&p2);

lib.checkOutBook("bcd","234");
cout << lib.checkOutBook("abc","234")<<endl;
lib.requestBook("abc","234");
cout<<b2.getRequestedBy()->getIdNum() <<endl;
for(int i=0;i<7;i++)
	lib.incrementCurrentDate();
lib.checkOutBook("bcd","123");
lib.checkOutBook("abc","345");

for(int i=0;i<24;i++)
	lib.incrementCurrentDate();

lib.payFine("bcd", 0.4);
cout << p1.getFineAmount() << endl;
cout << p2.getFineAmount() << endl;









}

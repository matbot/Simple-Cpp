/********************************************
 * Author: Mathew McDade
 * Date: Sun May 29 18:47:09 PDT 2016
 * Description: Patron class member function 
 * implementation section.
 * *****************************************/
#include <string>
#include <vector>
#include "Patron.hpp"
using std::string;
using std::vector;

/******************************
 * Patron::Patron constructor.
 * ***************************/
Patron::Patron(string idn, string n)
{
	idNum = idn;
	name = n;
	fineAmount = 0;
}

/********************************************
 * Patron class member variable get methods.
 * *****************************************/
string Patron::getIdNum()
{
	return idNum;
}

string Patron::getName()
{
	return name;
}

vector<Book*> Patron::getCheckedOutBooks()
{
	return checkedOutBooks;
}

double Patron::getFineAmount()
{
	return fineAmount;
}

/*********************************
 * Patron class member functions.
 * ******************************/
void Patron::addBook(Book* b)
{
	checkedOutBooks.push_back(b);
}

void Patron::removeBook(Book* b)
{
	for(int sub=0;sub<checkedOutBooks.size();sub++)
		if(checkedOutBooks.at(sub) == b)
			checkedOutBooks.erase(checkedOutBooks.begin()+sub);
}

void Patron::amendFine(double amount)
{
	fineAmount += amount;
}

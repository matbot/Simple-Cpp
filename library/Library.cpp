/**********************************************
 * Author: Mathew McDade
 * Date: Sun May 29 20:24:30 PDT 2016
 * Description: Library class member function
 * implementation section.
 * *******************************************/
#include <string>
#include <vector>
#include "Library.hpp"
using std::string;
using std::vector;

/******************************
 * Library class constructor.
 * ***************************/
Library::Library()
{
	currentDate = 0;
}

/********************************************
 * Library class member variable get methods.
 * ******************************************/
Patron* Library::getPatron(string pID)
{
	for(int sub=0;sub<members.size();sub++)
		if((members.at(sub)->getIdNum()) == pID)
			return members.at(sub);
	return NULL;
}

Book* Library::getBook(string bID)
{
	for(int sub=0;sub<holdings.size();sub++)
		if((holdings.at(sub)->getIdCode()) == bID)
			return holdings.at(sub);
	return NULL;
}

/***********************************
 * Library class member functions.
 * *********************************/
void Library::addBook(Book* b)
{
	holdings.push_back(b);
}

void Library::addPatron(Patron* p)
{
	members.push_back(p);
}

/***********************************************
 *	 Library::checkOutBook
 *********************************************/
string Library::checkOutBook(string pID, string bID)
{
	Book* book = NULL;
	Patron* patron = NULL;

	for(int sub=0;sub<holdings.size();sub++)
		if((holdings.at(sub)->getIdCode()) == bID)
			book = holdings.at(sub);
	if(!(book))
		return "book not found";
	
	for(int sub=0;sub<members.size();sub++)
		if((members.at(sub)->getIdNum()) == pID)
			patron = members.at(sub);
	if(!(patron))
		return "patron not found";

	if(book->getLocation() == CHECKED_OUT)
		return "book already checked out";

	else if(book->getLocation() == ON_HOLD_SHELF && book->getRequestedBy() != patron)
		return "book on hold by other patron";

	book->setCheckedOutBy(patron);
	book->setDateCheckedOut(currentDate);
	book->setLocation(CHECKED_OUT);
	if(book->getRequestedBy() == patron)
		book->setRequestedBy(NULL);
	patron->addBook(book);
	return "check out successful";
}

/************************************
 * 	Library::returnBook
 ***********************************/
string Library::returnBook(string bID)
{
	Book* book = NULL;
	Patron* patron = NULL;

	for(int sub=0;sub<holdings.size();sub++)
		if((holdings.at(sub)->getIdCode()) == bID)
			book = holdings.at(sub);
	patron = book->getCheckedOutBy();


	if(!(book))
		return "book not found";
	if(book->getLocation() != CHECKED_OUT)
		return "book already in library";

	patron->removeBook(book);
	book->setCheckedOutBy(NULL);

	if(book->getRequestedBy())
		book->setLocation(ON_HOLD_SHELF);
	else
		book->setLocation(ON_SHELF);

	return "return successful";
}

/**********************************
 * 	Library::requestBook
 *********************************/
string Library::requestBook(string pID, string bID)
{
	Book* book = NULL;
	Patron* patron = NULL;

	for(int sub=0;sub<holdings.size();sub++)
		if((holdings.at(sub)->getIdCode()) == bID)
			book = holdings.at(sub);
	if(!(book))
		return "book not found";
	
	for(int sub=0;sub<members.size();sub++)
		if((members.at(sub)->getIdNum()) == pID)
			patron = members.at(sub);
	if(!(patron))
		return "patron not found";

	if(book->getRequestedBy())
		return "book already on hold";

	book->setRequestedBy(patron);
	if(book->getLocation() == ON_SHELF)
		book->setLocation(ON_HOLD_SHELF);
	
	return "request successful";
}

/*******************************
 * 	Library::payFine	
 ******************************/
string Library::payFine(string pID, double pay)
{
	Patron* patron = NULL;
	
	for(int sub=0;sub<members.size();sub++)
		if((members.at(sub)->getIdNum()) == pID)
			patron = members.at(sub);
	if(!(patron))
		return "patron not found";

	patron->amendFine(-(pay));
	return "payment successful";
}

/******************************************
 * 	Library::incrementCurrentDate
 *****************************************/
void Library::incrementCurrentDate()
{
	currentDate++;
	
	for(int psub=0;psub<members.size();psub++)
		for(int bsub=0;bsub<members.at(psub)->getCheckedOutBooks().size();bsub++)
			if(currentDate - members.at(psub)->getCheckedOutBooks().at(bsub)->getDateCheckedOut() >
			members.at(psub)->getCheckedOutBooks().at(bsub)->getCheckOutLength())
				members.at(psub)->amendFine(.10);
}

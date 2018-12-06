/*********************************************************
 * Author: Mathew McDade
 * Date: Sun May 29 17:13:08 PDT 2016
 * Description: Book class member function implementation
 * section.
 * ******************************************************/
#include <string>
#include <cctype>
#include "Book.hpp"
using std::string;

/**************************
 * Book::Book constructor.
 * ***********************/
Book::Book(string idc, string t, string a)
{
	idCode = idc;
	title = t;
	author = a;
	setCheckedOutBy(NULL);
	setRequestedBy(NULL);
	setLocation(ON_SHELF);
}

/***********************************
 * Book class variable set methods.
 * ********************************/
void Book::setLocation(Locale l)
{
	location = l;
}

void Book::setCheckedOutBy(Patron* cOB)
{
	checkedOutBy = cOB;
}

void Book::setRequestedBy(Patron* rB)
{
	requestedBy = rB;
}

void Book::setDateCheckedOut(int d)
{
	dateCheckedOut = d;
}

/************************************
 * Book class variable get methods.
 * *********************************/
int Book::getCheckOutLength()
{
	return CHECK_OUT_LENGTH;
}

string Book::getIdCode()
{
	return idCode;
}

string Book::getTitle()
{
	return title;
}

string Book::getAuthor()
{
	return author;
}

Locale Book::getLocation()
{
	return location;
}

Patron* Book::getCheckedOutBy()
{
	return checkedOutBy;
}

Patron* Book::getRequestedBy()
{
	return requestedBy;
}

int Book::getDateCheckedOut()
{
	return dateCheckedOut;
}

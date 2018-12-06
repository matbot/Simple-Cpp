/****************************************
 * Description: BankAccount class member
 * function implementation section.
 * *************************************/
#include "bankAccount.hpp"
#include <string>
#include <iostream>
using namespace std;
/*****************************************
 * 	BankAccount::BankAccount
 * This is the BankAccount constructor. It
 * has three parameters that are passed to 
 * class member variables to initialize
 * them.
 * **************************************/

BankAccount::BankAccount(string cN, string cID, double cB)
{
	customerName = cN;
	customerID = cID;
	customerBalance = cB;
}

/*************************************
 * 	BankAccount::getCustomerName
 * Returns the object's customer name.
 * **********************************/

string BankAccount::getCustomerName()
	{ return customerName; }

/************************************
 * 	BankAccount::getCustomerID
 * Returns the object's customer ID.
 * *********************************/

string BankAccount::getCustomerID()
	{ return customerID; }

/***************************************
 * 	BankAccount::getCustomerBalance
 * Returns the object's balance.
 * ************************************/

double BankAccount::getCustomerBalance()
	{ return customerBalance; }

/**********************************
 * 	BankAccount::withdraw
 * Deducts a given amount from the
 * customer's balance.
 * *******************************/

double BankAccount::withdraw(double amount)
{
	return customerBalance -= amount;
}

/*********************************
 * 	BankAccount::deposit
 * Deposits a given amount to the 
 * customer's balance.
 * ******************************/

double BankAccount::deposit(double amount)
{
	return customerBalance += amount;
}


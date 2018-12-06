/*********************************************
 * Author: Mathew McDade
 * Date: Tue Apr 26 16:12:42 PDT 2016
 * Description: This is the BankAccount class
 * declaration. It includes all member
 * variables and functions.
 * ******************************************/
#ifndef BANKACCOUNT_HPP
#define BANKACCOUNT_HPP
#include <string>
using namespace std;

class BankAccount
{
	private:
		string customerName;
		string customerID;
		double customerBalance;

	public:
		BankAccount(string, string, double);

		string getCustomerName();
		string getCustomerID();
		double getCustomerBalance();

		double withdraw(double);
		double deposit(double);
};
#endif

#include <iostream>
#include <string>
#include "bankAccount.hpp"

using namespace std;

int main()
{
	string name,
		ID;
	double balance,
		deposit,
		withdraw;


	cout << "How many dollars are currently in the account?" << endl;
	cin >> balance;

	BankAccount mats("Mr. M", "Acct 1", balance);

	cout << "How much will you deposit?" << endl;
	cin >> deposit;
	mats.deposit(deposit);

	cout << "How much will you withdrawal?" << endl;
	cin >> withdraw;
	mats.withdraw(withdraw);

	cout << "You " << mats.getCustomerName() << ", ID " << mats.getCustomerID() << " now have " << mats.getCustomerBalance() << " dollars." << endl;

return 0;
}

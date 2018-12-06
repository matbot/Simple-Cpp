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


	cout << "Plees how many dollas?" << endl;
	cin >> balance;

	BankAccount mats("Mathew McDade", "numbah 1", balance);

	cout << "How much dem depositin?" << endl;
	cin >> deposit;
	mats.deposit(deposit);

	cout << "How much dem needs outin?" << endl;
	cin >> withdraw;
	mats.withdraw(withdraw);

	cout << "You " << mats.getCustomerName() << " ID, " << mats.getCustomerID() << " has gots " << mats.getCustomerBalance() << " dollas!!!!" << endl;

return 0;
}

//************************************
//Name: Mathew McDade
//Date: Sun Apr 10 16:23:24 PDT 2016 
//Description: This program takes a user-defined number of integers and returns the minimum and maximum of those integers.******//



#include <iostream> //Should only need iostream header.
using std::cin;
using std::cout;
using std::endl;
int main()
{
	int count, //Create int variables for loop counter, input, min and max.
	inputInteger,
	minInteger, maxInteger;

cout << "How many integers would you like to enter?"<<endl;
cin >> count; //The user's input for number of integers also sets the loop count.
cout << "Please enter " << count << " integers:"<<endl;
cin >> inputInteger; //inputInteger holds integers from cin.
minInteger = maxInteger = inputInteger; //min and max are set equal to the first input so they have a value that can be compared to in the loop.

while(count > 1) //Starting the while loop. I only count down to one since one integer was already entered prior to the loop.
	{
	cin >> inputInteger;
	if (inputInteger < minInteger) //tests if the input is lower than minimum.
		minInteger = inputInteger; //if so, input is the new minimum.
	else if (inputInteger > maxInteger) //if not, test if input is higher than maximum. 
		maxInteger = inputInteger; //if so, input is the new maximum.

	count--; //decrements the loop counter.
	}

cout << "Min: " << minInteger << endl; //Prints min and max.
cout << "Max: " << maxInteger << endl;

return 0; //normal program termination.
}


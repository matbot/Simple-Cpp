/*********************************************************************
**Author: Mathew McDade
**Date: Tue Apr 19 18:08:44 PDT 2016
**Desription: This program will take some positive integer, pass it 
* to the function, hailstone, and return the number of steps it takes 
* for hailstone to reach a value of 1.
**********************************************************************/

#include <iostream> //need the iostream header for my main method.

using namespace std; //need std namespace for my main method.

int hailstone(int); //This is the hailstone function prototype. 
					//It takes a single int argument by value.

int main() //my main method.
{
	//I am using two variables. The first, iceed, is the integer seed 
	//value for hailstone. The second, iceSteppes, stores the returned 
	//value from hailstone, which is how many steps it takes for 
	//hailstone to reduce the seed integer to a value of 1.
	int iceed, iceSteppes = 0; 	

	cout << "Please enter a positive integer value to seed the hailstone sequence:" << endl; //Get a seed integer from the user.
	
	cin >> iceed; //Store it in the seed variable.
	cout << "Hailing " << iceed << "..." << endl;

	if (iceed > 0)
	{
		iceSteppes = hailstone(iceed); //Call the hailstone function.
	
		cout << "Hailstone took " << iceSteppes << " steps to reach a value of 1." << endl; //Give the user feedback of how many steps hailstone took to reach a value of 1.
	}
	else
		cout << "Oops! Hailstone needed a positive integer to start steppin'." << endl;

	return 0; //normal program termination.
}

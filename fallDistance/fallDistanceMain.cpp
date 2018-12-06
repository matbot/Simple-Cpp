/*********************************************************************
**Desription: This program takes will ask the user to input the time, 
* in seconds, that an object has fallen. The program will then take 
* that amount of time, pass it to a function named fallDistance, and 
* return the distance the object has fallen using the equation, 
* distance = 1/2gt^2. 
*********************************************************************/

#include <iostream>
#include <cmath> //need to include cmath for the pow() function.

using namespace std;

float fallDistance(float timeSeconds); //function prototype.

int main()
{
	float timeSeconds = 0, distanceMeters = 0;

	cout << "Please enter a time in seconds:" << endl;
	cin >> timeSeconds;
	
	distanceMeters = fallDistance(timeSeconds);

	cout << "The object has fallen " << distanceMeters << " meters in " << timeSeconds << " seconds." << endl;

	return 0;
}

/************************************************************
 *						fallDistance
 * Author: Mathew McDade
 * Date: Wed Apr 20 16:22:33 PDT 2016
 * Function Description: This function takes time in seconds 
 * and returns distance in meters that an object would fall 
 * in that amount of time.
************************************************************/
#include <cmath>

float fallDistance(float timeSeconds) //function definition.
{
	float distanceMeters; //create a float variable to hold the result.

	distanceMeters =  pow(timeSeconds,2.0) * 9.8 * 0.5; //uses the user's input to calculate the distance fallen.
	return distanceMeters; //returns that value to the main method.
}

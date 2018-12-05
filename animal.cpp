/***
 * Author: Mathew Eli McDade
 * Date 3/25/16
 * Description: This is a program that will tell you what your favorite animal
 * is after you tell it what your favorite animal is.
 * **/

#include <iostream>
#include <string>

// a simple example program
int main()
{
	std::string faveAnimal;
	std::cout << "Please enter your favorite animal." << std::endl;
	std::cin >> faveAnimal;
	std::cout << "Your favorite animal is the " << faveAnimal;
	std::cout << "." << std::endl;

	return 0;
} 

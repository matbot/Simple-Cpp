
/*********************************************************
 * Utility Functions:
 * 1.Random Int: takes two ints as a range and returns a
 *	random number between them; if one integer is given,
 *	the range is between 0 and b.
 *
 * 2.Clear Page: called without parameters to clear the 
 *	standard ouput between prints in linux systems.
 *
 * 3.GetInt: gets and validates an integer value between 
 *	two values, a and b, or less than b.
 ********************************************************/
//#include <studio.h> //1.NULL, 
#include <stdlib.h> //1.srand,rand,
#include <time.h> //1.time,
#include <iostream> //2.cout,


/****************
 * 1.Random Int
 * *************/
int randInt(int a, int b)
{
	   srand(time(NULL));
	   return rand() % b + a;
}
int randInt(int b)
{
	   srand(time(NULL));
	   return rand() % b;
}

/*****************
 * 2.Clear Page
 * **************/
void clearPage()
{
	   std::cout << "\033[2J\033[1;1H";
}

/*************
 * 3.Get Int
 * **********/
int getInt(int a)
{
	   int number;
	   std::cin >> number;
	   while(std::cin.fail())
	   {
			 std::cin.clear();
			 std::cin.ignore(20,'\n');
			 std::cout << "Invalid input: Please enter an integer." << std::endl;
			 std::cin >> number;
	   }
	   while(number < 0 || number > a)
	   {
			 std::cout << "Invalid input: Please enter an integer between 0 and " << a << " :" << std::endl;
			 std::cin >> number;
	   }
	   return number;
}

int getInt()
{
	   int number;
	   std::cin >> number; 
	   while(std::cin.fail())
	   {
			 std::cin.clear();
			 std::cin.ignore(20,'\n');
			 std::cout << "Invalid input: Please enter an integer." << std::endl;
			 std::cin >> number;
	   }
	   while(number <= 0)
	   {
			 std::cout << "Invalid input: Please enter an integer greater than 0:" << std::endl;
			 std::cin >> number;
	   }
	   return number;
}

int getInt(int a, int b)
{
	   int number;
	   std::cin >> number;
	   while(std::cin.fail())
	   {
			 std::cin.clear();
			 std::cin.ignore(20,'\n');
			 std::cout << "Invalid input: Please enter an integer." << std::endl;
			 std::cin >> number;
	   }
	   while(number < a || number > b)
	   {
			 std::cout << "Invalid input: Please enter an integer between " << a << " and " << b << " :" << std::endl;
			 std::cin >> number;
	   }
	   return number;
}

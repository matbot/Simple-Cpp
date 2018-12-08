/*********************************************
 * *Author: Mathew McDade
 * *Description: The main method.
 * Includes mechanism to measure time elapsed 
 * for each function Fib function call.
 * *********************************************/
#include "tFibonacci.hpp"

#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	for(int i=1;i<=50;i++)
	{
		unsigned long long fib1, fib2;
		clock_t c1, c2;
		double t1, t2;

		c1 = clock();
		fib1 = nFib(i);
		c1 = clock() - c1;
		t1 = (double(c1))/CLOCKS_PER_SEC;
		

		c2 = clock();
		fib2 = rFib(i);
		c2 = clock() - c2;
		t2 = (double(c2))/CLOCKS_PER_SEC;

		cout << "N = " << i << " Fibonacci number: " << fib1 << " , " << fib2 << fixed << " Iterative time: " << t1 << "s Recursive time: " << t2 << "s" << endl;
	}
	return 0;
}

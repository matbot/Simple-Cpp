#ifndef MMCD_TFIB_HPP
#define MMCD_TFIB_HPP
/************************************************************************************
 * *Author: Mathew McDade
 * *Date: Sat Dec  3 16:05:13 PST 2016
 * *Description: Fibonacci number generator functions.
 * Adapted from examples found at:
 * https://www.codeproject.com/tips/109443/fibonacci-recursive-and-non-recursive-c
 * *********************************************************************************/
#include <iostream>
using namespace std;

/***************************************
 * nFib(): an iterative implementation
 * of Fibonacci number generator.
 * ************************************/
unsigned long long nFib(int n)
{
	unsigned long long first = 0;
	unsigned long long second = 1;
	int counter = 2;
	while(counter<n)
	{
		unsigned long long temp = second;
		second = first + second;
		first = temp;
		counter++;
	}
	if(n==0)
		return 0;
	else
		return first + second;
}

/***************************************
 * rFib(): a recursive implementation
 * of Fibonacci number generator.
 * ************************************/
unsigned long long rFib(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	return rFib(n-1) + rFib(n-2);
}

#endif

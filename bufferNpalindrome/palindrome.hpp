/******************************************
 * *Author: Mathew McDade
 * *Date: Sat Nov 26 03:58:57 PST 2016
 * *Description: Palindrome class header.
 * ***************************************/
#ifndef MMCD_PALINDROME_HPP
#define MMCD_PALINDROME_HPP

#include <iostream>
#include <stack>
#include <string>
using std::cout;
using std::endl;
using std::string;
using std::stack;

class Palindrome
{
private:
	string word;
	stack<char> letters;
public:
	Palindrome(string);
	~Palindrome(){};

	string reverse();
};
#endif


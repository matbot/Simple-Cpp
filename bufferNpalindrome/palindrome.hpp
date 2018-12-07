/******************************************
 * *Author: Mathew McDade
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


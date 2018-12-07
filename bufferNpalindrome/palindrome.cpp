/********************************************
 * *Author: Mathew McDade
 * *Description: Palindrome implementation.
 * *****************************************/
#include "palindrome.hpp"
#include "utils.hpp"
using std::cout;
using std::endl;
using std::string;

/**************
 * Constructor
 * ***********/
Palindrome::Palindrome(string word)
{
	this->word = word;
	for(auto i=0;i<word.length();i++)
		letters.push(word.at(i));
}

/*************************************************
 * reverse(): uses the top() and pop() functions
 * to return the user input string in reverse.
 * **********************************************/
string Palindrome::reverse()
{
	int size = letters.size();
	for(auto i=0;i<size;i++)
	{
		char c = letters.top();
		word.push_back(c);
		letters.pop();
	}
	cout << endl;
	return word;
}

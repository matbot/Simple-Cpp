
#include "intStack.hpp"
#include <iostream>
using std::cout;
using std::endl;

/**************
 * Constructor
 * ***********/
IntStack::IntStack()
{
	top = NULL;
}

/*****************************************
 * push(): pushes a value onto the stack.
 * **************************************/
void IntStack::push(int n)
{
	top = new IntStackNode(n, top);
}

/****************************************
 * pop(): removes and returns the value
 * at the top of the stack.
 * **************************************/
int IntStack::pop()
{
	IntStackNode* temp;

	if(isEmpty())
	{
		cout << "Error: Empty Stack" << endl << endl;
		return -123456789;
	}
	else
	{
		int nodeReturnValue = top->value;
		temp = top;
		top = top->next;
		delete temp;
		return nodeReturnValue;
	}
}

/************
 * isEmpty()
 * *********/
bool IntStack::isEmpty() const
{
	if(top==NULL)
		return true;
	else
		return false;
}


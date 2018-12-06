
#ifndef MMCD_INTSTACK_HPP
#define MMCD_INTSTACK_HPP
#include <cstdlib>
class IntStack
{
private:
	class IntStackNode
	{
		friend class IntStack;
		int value;
		IntStackNode* next;

		IntStackNode(int nextValue, IntStackNode* nextNode = NULL)
		{
			value = nextValue;
			next = nextNode;
		}
	};
	IntStackNode* top;

public:
	IntStack();
	void push(int);
	int pop();
	bool isEmpty() const;
};

#endif

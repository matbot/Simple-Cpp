
#ifndef MMCD_INTQUEUE_HPP
#define MMCD_INTQUEUE_HPP

#include <cstdlib>

class IntQueue
{
private:
	class IntQueueNode
	{
		friend class IntQueue;
		int value;
		IntQueueNode* next;

		IntQueueNode(int nextValue, IntQueueNode* nextNode = NULL)
		{
			value = nextValue;
			next = nextNode;
		}
	};
	IntQueueNode* front;
	IntQueueNode* back;

public:
	IntQueue();
	~IntQueue();
	void enqueue(int);
	int dequeue();
	bool isEmpty() const;
	void clear();
};

#endif

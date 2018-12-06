
#include "intQueue.hpp"
#include <iostream>
using std::cout;
using std::endl;

/****************
 * Constructor
 * ************/
IntQueue::IntQueue()
{
	front = NULL;
	back = NULL;
}

/***************
 * Destructor
 * ************/
IntQueue::~IntQueue()
{
	clear();
}

/********************************************
 * enqueue(): places a value into the queue.
 * ******************************************/
void IntQueue::enqueue(int n)
{
	if(isEmpty())
	{
		front = new IntQueueNode(n);
		back = front;
	}
	else
	{
		back->next = new IntQueueNode(n);
		back = back->next;
	}
}

/*******************************************
 * dequeue(): removes and returns the value
 * at the front of the queue.
 * *****************************************/
int IntQueue::dequeue()
{
	IntQueueNode* temp;

	if(isEmpty())
	{
		cout << "Error: Empty Queue:" << endl << endl;
		return -123456789;
	}
	else
	{
		int nodeReturnValue = front->value;
		temp = front;
		front = front->next;
		delete temp;
		return nodeReturnValue;
	}
}

/************
 * isEmpty()
 * **********/
bool IntQueue::isEmpty() const
{
	if(front==NULL)
		return true;
	else
		return false;
}

/**********
 * clear()
 * *******/
void IntQueue::clear()
{
	while(!isEmpty())
		dequeue();
}

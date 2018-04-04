#pragma once
#include "Element.h"
#include <iostream>

class QueuePriority
{
private:
	int amount,size;
	Element* tab;

public:
	QueuePriority();
	~QueuePriority();
	void add(int priority, int value);
	int getFirst();
	int getAmount();
	void sortByInsertion();
	void sortByChoice();
	void debug();
};


#include "QueuePriority.h"


QueuePriority::QueuePriority()
{
	amount = 0;
	size = 10;
	tab = new Element[size];
}

QueuePriority::~QueuePriority()
{
	delete [] tab;
}

void QueuePriority::add(int priority, int value)
{
	if (amount >= size)
	{

		size = size + 10;
		Element *tab2;
		tab2 = new Element[size];
		for (int j = 0; j < amount; j++)
			tab2[j] = tab[j];
		delete[] tab;
		tab = tab2;
	}

	int i = 0;
	if (amount != 0)
	{
		for (; i < amount; i++)
		{
			if (priority > tab[i].getPriority())
				break;

		}
		if (amount != 1)
		{
			for (int a = amount - 1; a >= i; a--)
			{
				tab[a + 1] = tab[a];
			}
		}
	}
	
	tab[i] = Element(priority, value);
	amount++;
}

int QueuePriority::getFirst()
{
	if (amount == 0)
		return int();

	int val = tab[0].getValue();
	for (int k = 0; k < amount - 1; k++)
		tab[k] = tab[k + 1];
	amount--;
	return val;

}

int QueuePriority::getAmount()
{
	return amount;
}


void QueuePriority::sortByInsertion()
{
	for (int j = amount - 1; j > 0; j--)
	{
		Element x = tab[j];
		int i;
		for(i = j + 1; (i <= amount - 1) && (x.getValue() > tab[i].getValue())&&(x.getPriority()==tab[i].getPriority()); i++)
		{
			tab[i - 1] = tab[i];
		}
		tab[i - 1] = x;
	}	
	
}
	
void QueuePriority::debug() {
	for (int i = 0; i < amount; i++) {
		std::cout << tab[i].getPriority() << " ";
	}
}


void QueuePriority::sortByChoice()
{
	int min;
	Element x;
	for (int i = 0; i<amount - 1; i++)
	{
		min = i;
		for (int j = i + 1; (j<amount-1)&&(tab[j].getPriority()==tab[i].getPriority()) ; j++)
		{
			if (tab[j].getValue()<tab[min].getValue())
				min = j;
		}
		x = tab[min];
		tab[min] = tab[i];
		tab[i] = x;
	}





}

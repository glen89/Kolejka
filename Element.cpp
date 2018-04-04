#include "Element.h"

Element::Element(int _priority, int _value)
{
	priority = _priority;
	value = _value;
}


Element::~Element()
{
}

int Element::getPriority()
{

	return priority;
}

int Element::getValue()
{
	return value;
}

void Element::operator=(Element & e)
{
	this->value = e.value;
	this->priority = e.priority;
}


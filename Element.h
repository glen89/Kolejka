#pragma once

class Element
{
private :
	int priority;
	int value;
public:
	Element() = default;
	Element(int _priority, int _value);
	~Element();
	int getPriority();
	int getValue();
	void operator =(Element& e);
};


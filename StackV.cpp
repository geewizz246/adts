#include "StackV.h"

int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	data.push_back(val);
}

void Stack::pop()
{
	data.pop_back();
}

int Stack::top()
{
	int val = data.back();
	return val;
}

void Stack::clear()
{
	data.clear();
}

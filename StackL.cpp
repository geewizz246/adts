#include "StackL.h"

int Stack::size()
{
	return data.size();
}

void Stack::push(int val)
{
	data.insert(val, data.size()+1);
}

void Stack::pop()
{
	data.remove(data.size());
}

int Stack::top()
{
	int val = data.getElem(data.size());
	return val;
}

void Stack::clear()
{
	data.clear();
}

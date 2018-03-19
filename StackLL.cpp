//Change so that data members are inserted at the front of the list
//and popped from the front of the list


#include "StackLL.h"
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions

using namespace std;


class Stack::Node //self-referential Node class
{
public:
	int data = 0;
	Node* link = nullptr;
	//link is a data member which is a pointer 
	//to an object of the same type (i.e. Node)
};//end Node class definition (can only be seen by the List class)


Stack::~Stack()
{
	while(num_elements > 0)
		pop();
}
	
int Stack::size()
{
	return num_elements;
}

void Stack::push(int val)
{
	Node* newPtr = new Node{val};
	
	if(num_elements == 0)
	{
		newPtr->link = frontPtr;
		frontPtr = newPtr;
	}
	else
	{
		Node* iPtr = nullptr;
		int i=1;
		
		for(iPtr = frontPtr; i < num_elements; i++)
			iPtr = iPtr->link;
		
		newPtr->link = iPtr->link;
		iPtr->link = newPtr;
	}
	
	num_elements++;
}

void Stack::pop()
{
	Node* delPtr;
	
	if(num_elements == 1)
	{
		delPtr = frontPtr;
		frontPtr = frontPtr->link;
	}
	else
	{
		Node* iPtr = nullptr;
		int i=1;
		
		for(iPtr = frontPtr; i < num_elements-1; i++)
			iPtr = iPtr->link;

		delPtr = iPtr->link;
		iPtr->link = delPtr->link;
	}
	
	delete delPtr;
	num_elements--;
}

void Stack::clear()
{
	while(frontPtr != nullptr)
		pop();
}

int Stack::top()
{
	if(num_elements == 1)
	{
		return frontPtr->data;		
	}
	else
	{
		Node* iPtr = nullptr;
		int i=1;
		
		for(iPtr = frontPtr; i < num_elements; i++)
			iPtr = iPtr->link;
			
		return iPtr->data;
	}
}

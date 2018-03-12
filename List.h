
#include <iostream>
#include <stdexcept>//used to be able to "throw" exceptions
using namespace std;

#ifndef LIST_H
#define LIST_H

class List //begin List definition 
{
	private:
	class Node;//forward declaration (defined in the implementation file)
	
	Node* frontPtr = nullptr;
	int num_elements = 0;
	
	public:
	~List();//destructor
	void insert(int element, int k);//insert element at location k
	void remove(int k);//remove element at location k
	int size();//return the number of elements in the List
	
	
	/** MISSING OPERATIONS */
	//... fill in ....
	int getElem(int k); //return element at location k
	void clear(); //make the list empty
	//void empty(); //tells you if the list is empty
};//end List definition

#endif

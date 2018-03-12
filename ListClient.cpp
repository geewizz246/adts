#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
	L1.insert(5,1);
	L1.insert(8,1);
	L1.insert(7,3);
	int val = L1.getElem(3);
	
	cout << "Size is now " << L1.size() << endl;
	cout << "Val is " << val << endl << endl;
	
	L1.clear();
	cout << endl << "Size after clear is " << L1.size() << endl;
	
}

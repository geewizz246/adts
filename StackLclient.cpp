#include <iostream> 
#include <string> 
#include "StackL.h"//Use List ADT implementation of Stack

using namespace std;
        
        
string reverseString(string str)
{
     string res;
     Stack stk;

   for (auto ch : str ) 
      stk.push(ch);

    
    while( stk.size() > 0)
       {
	  res +=  stk.top();
	   stk.pop();
       }

   return res;
}


int main()
{         
    string a_string = "COMP2115 here we come!!!";
     
    cout<<"\""<<a_string<<"\""<<endl<<"\""<<reverseString(a_string)<<"\"";
	    
    return 0;
        
}
/*
int main()
{
	Stack stk;
	
	cout << "Size of stack = " << stk.size() << endl;
	stk.push(1);
	stk.push(2);
	cout << "Top of stack = " << stk.top() << endl;
	cout << "Size of stack = " << stk.size() << endl;
	return 0;
}
*/

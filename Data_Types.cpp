#include <iostream>
using namespace std;

// sizeof is a function which tells us about the size of datatype.

int main() 
{
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    
    cout << "Size of long : " << sizeof(long) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of boolean : " << sizeof(bool) <<endl;
    
    return 0;
}

/* 
# DATATYPE MODIFIERS:- 
datatype modifiers are used with the built-in data types to modify the length of data that a particular data type can hold. 





Data type modifiers available in C++ are: 


Signed
Unsigned - only take the positive value.
Short
Long
*/
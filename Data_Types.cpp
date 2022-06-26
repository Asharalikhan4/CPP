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
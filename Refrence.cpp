// Refrence is a alias of variable.
// it must be initilaised when declared.
// it dosen't take any memory.
// it cannot be modified to refer to other variable.
// syntax:- int &y = x;

#include <iostream>

int main(){
    int x = 10;
    int &y = x;
    std::cout<<x<<std::endl;  // print the value of x.
    std::cout<<&x<<std::endl;  // print the address of x.
    std::cout<<y<<std::endl;  // print the value of x.
    std::cout<<&y<<std::endl;  // print the address of x.

    return 0;
}
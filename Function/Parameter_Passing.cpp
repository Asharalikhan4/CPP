/*
Parameter passing method-
1. Pass/call by value.
2. Pass/call by address.
3. Pass/call by refrence.

*/

// void swap(int a, int b){
//     // call by value function.
//     // we use this when we want some operation on value and then return the result it will do that, and yes it can't interchange the value.
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

#include <iostream>


void swap(int *a, int *b){
    // call by address
    int temp;
    temp = *a;
    a* = *b;
    b* = temp;
}

void swap(int &a, int &b){
    // call by refrence
    // it can change actual parameter.
    // this is an example of inline function.
    int temp;
    temp = a;
    a = b;
    b = temp;
}




int main(){
    int x = 10, y = 20;
    //swap(x,y);  // calling call by value function.
    swap(&x,&y);  // calling call by address function.
    swap(x,y);  // calling call by refrence function.
    std::cout<<x<<" "<<y<<std::endl;
    return 0;
}
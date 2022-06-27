/* 
# Function Overloading
- you can write function with same name but with different argument list.
*/



#include <iostream>


// // Concept of function overloading.

// int Add(int a, int b){
//     // function to add two number
//     return a+b;
// }

// int Add(int a, int b, int c){
//     // function to add three number.
//     return a+b+c;
// }



// We can make a default function to work as a single.
int Add(int a, int b, int c = 0){
    return a+b+c;
}


int main(){
    int sum;
    sum = Add(5,5);
    std::cout<<sum<<std::endl;
    sum = Add(5,5,5);
    std::cout<<sum<<std::endl;
    return 0;
}
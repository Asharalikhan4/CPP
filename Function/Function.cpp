#include <iostream>

void Display(){
    // simple function to print.
    std::cout<<"Hey I am Function"<<std::endl;
}

int Add(int a, int b){
    // function to add two numbers.
    return a+b;
}

int main(){
    int sum;
    Display();
    sum = Add(5,5);
    std::cout<<sum<<std::endl;
    return 0;
}
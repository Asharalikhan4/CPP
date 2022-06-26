#include <iostream>

void display(){
    // a normal function.
    std::cout<<"Hemlo"<<std::endl;
}

int max(int x, int y){
    return x>y?x:y;
}

int main(){
    int maxNum;
    void (*fp)();  // Declaration of a function pointer.
    int (*Mp)(int, int);
    fp = display;  // Initialization
    Mp = max;
    (*fp)();  // calling the function. there are no arguement so block is empty.
    maxNum = (*Mp)(10,5);
    std::cout<<maxNum<<std::endl;
    return 0;
}
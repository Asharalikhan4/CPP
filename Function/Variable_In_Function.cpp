// static variable are those variable which always remain inside the memory.

#include <iostream>

int g = 0;  // this is a global variable. it is acessible everywhere in the function.

void func(){
    static int s = 0; // declaration of static varaible.
    int a = 5; // this is a local variable. this is local to a function.
    g = g + a;
    std::cout<<g<<std::endl;
}

int main(){
    g = 15;
    int z = 0; // this is also a local variable function. local to a main function.
    func();
    g++;
    std::cout<<g<<std::endl;
    return 0;
}
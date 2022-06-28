#include <iostream>

class Rectangle{
    // whatever you write inside the class become private so we have to write public before that.
public:
    float length, breadth;

    float area(){
        return length*breadth;
    }

    float perimeter(){
        return 2*(length+breadth);
    }
};

int main(){
    Rectangle r1, r2;   // r1 & r2 are objects.

    r1.length = 10;  // accessing the members of the class.
    r1.breadth = 10;

    r2.length = 20;  // accessing the members of the class.
    r2.breadth = 20;

    std::cout<<r1.area()<<std::endl;  // accessing class function.
    std::cout<<r2.area()<<std::endl;

    return 0;
}
#include <iostream>

class Rectangle{
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
    Rectangle r;
    Rectangle *p;
    p = &r;
    r.length = 10;
    p->length = 10;
    p->breadth = 10;
    std::cout<<p->area()<<std::endl;
    return 0;
}
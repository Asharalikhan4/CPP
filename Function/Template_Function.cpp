// if we have the same function with the same logic and only they differ by type of datatype then we use the concept of the template function.

#include <iostream>


template <class T>
T max(T a,T b){
    return a>b?a:b;
}


int main(){
    std::cout<<max(10,5)<<std::endl;
    std::cout<<max(2.3,1.4)<<std::endl;
    std::cout<<max(2.3f,5.6f)<<std::endl;
    return 0;
}
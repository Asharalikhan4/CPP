// Function that call itself

#include <iostream>

void fun(int n){
    if(n>0){
        std::cout<<n<<std::endl;
        fun(n-1);
    }
}



int main(){
    int x = 5;
    fun(x);
    return 0;
}
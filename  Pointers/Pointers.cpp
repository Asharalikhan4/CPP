// Pointer is a variable which is used to store the address of data.
// Pointer is used to access the heap memory but the pointer take the memory inside the stack.

#include <iostream>

int main(){
    int x = 10;
    int *p = &x;  // declaration and initialization.
    std::cout<<x<<std::endl;  // print the data value.
    std::cout<<&x<<std::endl;  // print the address at which the data is store.
    std::cout<<p<<std::endl;  // it also print the address at which the data is store.
    std::cout<<&p<<std::endl;  // address at which the address of the data is store.
    std::cout<<*p<<std::endl;  // derefrencing of pointer.


    // initialization of heap memory using pointer
    int *z = new int[10];  // the will initialize 10 block of memory inisde heap.
    delete []z;  // to free the heap memory.
    // you can acess it just like normal array.


    // Arithmethic opeartion on pointer
    int A[5] = {2,4,6,8,10};
    int *d = A;
    std::cout<<*(d+1)<<std::endl;  // with this we can aslo print the data of array.
}
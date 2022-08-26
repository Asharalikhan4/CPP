#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;  // this is how we declare.
    s.push(1);     // this is how we initilize.
    s.push(2);
    s.push(3);
    s.emplace(4);   // this will also enter the number in the stack
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();   // this is how we delete a value. pop will delete the value that is inserted at the last.
    }
    return 0;
}

/*
Some function of stack
empty() – Returns whether the stack is empty – Time Complexity : O(1) 
size() – Returns the size of the stack – Time Complexity : O(1) 
top() – Returns a reference to the top most element of the stack – Time Complexity : O(1) 
push(g) – Adds the element ‘g’ at the top of the stack – Time Complexity : O(1) 
pop() – Deletes the top most element of the stack – Time Complexity : O(1)
*/
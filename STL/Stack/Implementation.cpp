#include<bits/stdc++.h>
using namespace std;

int main(){
    stack<int> s;  // this is how we declare.
    s.push(1);     // this is how we initilize.
    s.push(2);
    s.push(3);
    while(!s.empty()){
        cout<<s.top()<<endl;
        s.pop();   // this is how we delete a value. pop will delete the value that is inserted at the last.
    }
    return 0;
}
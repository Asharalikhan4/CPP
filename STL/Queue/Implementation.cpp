#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<int> q;  // this is how we declare.
    q.push(1);     // this is how we initilize.
    q.push(2);
    q.push(3);
    while(!q.empty()){
        cout<<q.front()<<endl;    // it will give us the value of the first inserted element.
        q.pop();   // this is how we delete a value. pop will delete the value that is inserted at the last.
    }
    return 0;
}
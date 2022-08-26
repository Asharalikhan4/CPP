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

/*
Some function of queue.
q.empty()	Returns whether the queue is empty. It return true if the queue is empty otherwise returns false.
q.size()	Returns the size of the queue.
q.swap()	Exchange the contents of two queues but the queues must be of the same data type, although sizes may differ.
q.emplace()	Insert a new element into the queue container, the new element is added to the end of the queue.
q.front()	Returns a reference to the first element of the queue.
q.back()	Returns a reference to the last element of the queue.
q.push(g) 	Adds the element ‘g’ at the end of the queue.
q.pop() 	Deletes the first element of the queue.
*/
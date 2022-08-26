/*
Notes:-
As the name suggest priority queue it means the element who has the largest value will be at the top -> if you're using the character then the largest character will stay at the top.
*/


#include <bits/stdc++.h>
using namespace std;

int main(){
    // Max Heap
    priority_queue<int>qp;
    pq.push(5);
    pq.push(5);
    pq.push(5);
    pq.emplace(10);

    cout<<pq.top();

    pq.pop();

    cout<< pq.top();

    // Minimum Heap - means it will store the element with the least value at the top.
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);
    pq.push(5);
    pq.push(5);
    pq.emplace(10);

    cout<< pq.top();
    return 0;
}

/*
More on priority queue
priority_queue::empty()	Returns whether the queue is empty.
priority_queue::size() 	Returns the size of the queue.
priority_queue::top()	Returns a reference to the topmost element of the queue.
priority_queue::push() 	Adds the element ‘g’ at the end of the queue -> O(logn).
priority_queue::pop()	Deletes the first element of the queue -> O(logn).
priority_queue::swap()	Used to swap the contents of two queues provided the queues must be of the same type, although sizes may differ.
priority_queue::emplace()	Used to insert a new element into the priority queue container.
priority_queue value_type 	Represents the type of object stored as an element in a priority_queue. It acts as a synonym for the template parameter.
*/
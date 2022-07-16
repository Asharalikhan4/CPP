#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> &v){  // here we are taking the array as it is not it's copy so it will reduce our time complexity.
    // this will print our vector.
    cout<<"size: "<<v.size()<<endl;
    for(int i = 0; i < v.size(); ++i){
        // v.size() it will tell us the size of the vector.
        cout<<v[i]<<" ";
    }
    cout<<endl;
}


int main(){
    // Vectors are similar to array. but in vectors we have dynamic size.
    vector<int>v;   // it will create a array of int type with name v;

    // we can aslo declare a vector of a size and with some value but that also will be dynamic in nature.
    // vector<int>z(10,3);  // 10 = size  3 = value


    v.push_back(1);   // it will push an element at the back of the array means this value will be inserted in our vector.
    v.push_back(2);   // complexity O(1)
    v.push_back(3);
    
    // Taking input using for loop
    /*
    for(int i = 0; i < 4; i++){
    cout<<"Enter an element to add to this vector: "<<endl;
    cin>>element;
    v.push_back(element);
    */
    
    /*
    Vector iterator concept 
    vector<int> :: iterator name = v.begin();  // this iterator will point on the beginning of the vector.
    */
    
    v.push_back(4);
    cout<<"Vector elements"<<endl;
    printVector(v);
    v.pop_back(); // it will delete a element from the last of the vector. Complexity O(1)
    cout<<"Vector after pop function"<<endl;
    printVector(v);
    vector<int> v2 = v;  // this will copy the whole v vector to the v2 vector. Time complexity O(n)
    return 0;
}

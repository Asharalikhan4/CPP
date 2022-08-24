#include <bits/stdc++.h>
using namespace std;

// Every thing in STL can be nested. Ex-
// pair<int, pair<int, int>> p = {1,{3,4}};

int main(){
    // Pairs is a class in c++ which is used to store two values.
    pair<int,string>p;
    // Now for entering the value.
    p = make_pair(2,"abc");
    // Another way of initializing.
    p = {2,"std"};
    // We can aslo pass any pair to another by refrence or in a normal way.
    pair<int,string> &p1 = p;  // here we are passing it by refrence. now we can aslo manipulate the data.
    cout<<p.first<<" "<<p.second<<endl;

    // we can aslo declare the pair of an array
    int a[] = {1,2,3};
    int b[] = {2,3,4};
    pair<int,int> p_array[3];
    p_array[0] = {1,2};
    p_array[1] = {2,3};
    p_array[2] = {3,4};

    Swap(p_array[0], p_array[2]);  // When we do this then the whole pair will be swapped.

    for(int i = 0; i < 3; ++i){
        cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
    }
    return 0;

    
}
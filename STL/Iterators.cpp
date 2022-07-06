#include <bits/stdc++.h>
using namespace std;

int main(){
    // Iterators is used to access the data of the containers.
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    for(int i = 0; i < v.size(); ++i){
        cout<< v[i] << " ";
    }
    cout<<endl;
    vector<int> :: iterator it = v.begin();  // this is how we declare an iterator.
    //  cout<< (*it) <<endl;  to check at which point iterator is pointing.
    //  v.begin()   it will point at the start of the vector.
    //  v.end()   it will next to the last element.
    for(it = v.begin(); it != v.end(); ++it){
        cout<<(*it)<<endl;
    }
    return 0;
}
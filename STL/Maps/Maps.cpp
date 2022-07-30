#include <bits/stdc++.h>
using namespace std;


/*
 There are two major type of maps
0. Normal maps
1. Unorders maps
2. Multimaps

- Maps is a data structure which is used to store the key value pairs
*/


void printMap(map<int,string> &m){
    cout<< "Size: "<<m.size()<<endl;  // print the current size of the map.
    // One more option to print the map.
    for(auto &pr : m){
        cout<<pr.first << " " <<pr.second << endl;
    }
}


int main(){
    map<int, string> m;
    m[1] = "abc";  // this is how we do the insertion in maps.
    m[5] = "cdc";  // Complexity O(logn) where n is the size of the map.
    m[3] = "acd";
    m.insert(make_pair(4,"Ashar"));  // we can aslo do the insertion like this.

    // Printing the maps
    // map<int, string> :: iterator it;
    // for(it = m.begin(); it != m.end(); ++it){
    //     cout<<(*it).first << " " <<(*it).second()<<endl;`
    // }

    // Some more function on map
    auto it = m.find();  // it will help us to find anything in map. it will return a iterator. if there is no value corresponds to this index then it will return the next to last element.
    if(it == m.find()){
        cout<< "No Values"<<endl;
    } else {
        cout<< (*it).first << endl;
    }

    printMap(m);
    return 0;
}

// when the output comes it wil be in a sorted manner.
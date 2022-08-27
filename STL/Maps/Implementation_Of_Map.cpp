/*
- Maps are associative containers that store elements in a mapped fashion. Each element has a key value and a mapped value. No two mapped values can have the same key values.
- it store the unique key in the sorted order.
*/

#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int>mpp;
    map<int, pair<int, int>>mpp;
    map< pair<int, int>, int>mpp;


    // Storing the value
    mpp[1] = 2;  // this means store the value 2 at the 1 or with the key 1.
    mpp.emplace({3, 1});
    mpp.insert({2, 4});
    mpp[{2,3}] = 10;  // here the key will be 2,3 and the corresponding will be 10.

    for(auto it : map){
        cout<<it.first << " " << it.second << endl;
    }

    cout<< mpp[1];
    cout<< mpp[5];

    auto it = mpp.find(3);
    cout<< *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);
    auto it = mpp.upper_bound(3);
    return 0;
}

/*
Function on map-
begin() – Returns an iterator to the first element in the map.
end() – Returns an iterator to the theoretical element that follows the last element in the map.
size() – Returns the number of elements in the map.
max_size() – Returns the maximum number of elements that the map can hold.
empty() – Returns whether the map is empty.
pair insert(keyvalue, mapvalue) – Adds a new element to the map.
erase(iterator position) – Removes the element at the position pointed by the iterator.
erase(const g)– Removes the key-value ‘g’ from the map.
clear() – Removes all the elements from the map.
*/
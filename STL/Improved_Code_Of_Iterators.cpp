#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(3);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    for(int &value : v){  // this for loop work in every container.
        cout<< value << " ";
    }
    return 0;
}
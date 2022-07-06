#include <bits/stdc++.h>
using namespace std;


void printVector(vector<pair<int,int> > &v){
    for(int i = 0; i < v.size(); ++i){
        cout<<v[i].first<<" "<<v[i].second <<endl;
    }
    cout<<endl;
}

int main(){
    // Vectors of pair
    vector<pair<int,int> > v;
    v.push_back(make_pair(1,2));
    v.push_back(make_pair(2,3));
    v.push_back(make_pair(3,4));
    v.push_back(make_pair(4,5));

    printVector(v);
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

void printVector(vector<pair<int,int> > &v){
    for(int i = 0; i < v.size(); ++i){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    //vector<int> v[10]; // by this line we have 10 vectors now.
    int N;
    cin>> N;
    vector<int> v[N];
    for(int i = 0; i < N; ++i){
        int n;
        cin>>n;
        for(int j = 0; j < n; ++j){
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    for(int i = 0; i < N; ++i){
        printVector(v[i]);
    }
    return 0;
}


// x.emplace_back is faster then x.push_back while entering the element at the last.
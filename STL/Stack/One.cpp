// Parenthesis matching problem

#include<bits/stdc++.h>
using namespace std;

int isValid(string s){
    stack<char> st;
    for(int i = 0;i < s.length(); i++){
        if(s[i] == '('){
            st.push('(');
        }else{
            st.pop();
        }
    }
    return st.empty();
}



int main(){
    string s = ")";
    if(isValid(s)){
        cout<<"Paranthesis are matched"<<endl;
    }else{
        cout<<"Paranthesis are not matched"<<endl;
    }
    return 0;
}
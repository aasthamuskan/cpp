#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<int>st;
    stack<int>temp;
    while(!st.empty()){
    temp.push(st.top());
    st.pop();}
    st.push(20);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();}
}


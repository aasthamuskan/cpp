#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    int count=0;
    //int s;
    for(int i=0;i<st.size();i++){
        if(st[i]=='('){
            st.push(st[i]);
        }else{
            if(st.empty()){
            count++;
            }
            else{
            st.pop();
            }
        
            
        }
    }
    return count++ st.size();
}
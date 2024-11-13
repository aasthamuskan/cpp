#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>st;
    int i;
    int s[n];
    for(i=0;i<s.size();i++){
        if(s[i]=='('||s[i]=='{'||s[i]=='['){
            st.push(s[i]);
        }else{
            if(st.empty()){
                return 0;
            }else if (s[i]==')'){
                if(s.top()!='('){
                    return 0;
                }else{
                    st.pop();
                }
                else if(s[i]==)
            }
        }
    }
}

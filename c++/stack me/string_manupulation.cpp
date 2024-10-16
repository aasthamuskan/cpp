#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<string>s;
    for(i=0;i<v.size;i++){
        if(s.empty()){
            s.push(v[i]);
        }else if(s.top()==v[i]);{
            s.pop();
        }else{
            s.push(v[i]);
        }
    }
    return s.size();
}

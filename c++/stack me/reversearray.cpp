#include<bits/stdc++.h>
using namespace std;
int main(){
    stack<char>s;
    for(int i=0;i<s.size();i++){
        s.push(s[i]);

    }
    int i=0;
    while(!s.empty()){
        s[i]=s.top();
        i++;
        s.pop();
    }
}
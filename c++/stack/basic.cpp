#include<iostream>
#include<stack>
using namesapce std;
int  main(){
    //creation
    stack<int> s;
 //insertion
    s.push(2);
    s.push(3);
    //pop
    s.pop();
    cout<<"printing top element"<< s.top()<<endl;
    if(s.empty()){
        cout<<"stack is empty"<<endl;

    }
    else{
        cout<<"stack is not empty"<<endl;

    }
    return 0;
}
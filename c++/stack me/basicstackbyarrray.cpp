#include<bits/stdc++.h>
using namespace std;
//implement it with array
class mystack{
    int *arr;
    int size;
    int top;
    public:
    mystack(int s){
        size=s;
        top=-1;
        arr=new int[s];
    }
    //push opration
    void push(int value){
        if(top==size-1){
            cout<<"stacck overflow";
            return ;
        }
        else{
            top++;
            arr[top]=value;
            cout<<"pushed"<<value<<"into the stack"<<endl;
        }
    };
    //pop opration
    void pop(){
        if(top==-1){
            cout<<"stack underflow";
            return;
        }else{
            top--;
            cout<<"popped"<<arr[top+1]<<"from the stack"<<endl;
        }
    }
    //peek operation
    int peek(){
        if(top==-1){
            cout<<"stack is empty\n";
            return -1;
        }else{
            return arr[top];
        }
    
    }
    //isempty operation
    bool isempty(){
        return top==-1;
    }
    //issize
    int issize(){
        return top+1;
    }

};
int main(){
  mystack s(5);
  s.push(2);
  s.push(4);
  s.push(7);
  s.pop();
  s.pop();
  s.pop();
  s.pop();
  s.peek();

  

}

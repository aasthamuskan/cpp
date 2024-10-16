#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node *next;

    node(int value){
        data=value;
        next=NULL;
    }
};
class stack{
    node *top;
    int size;
    public:
    stack(){
        top=NULL;
        size=0;
    }
    //push operation
    void push(int value){
        node *temp=new node(value);
        if(temp==NULL){
            cout<<"stack overflow\n";
            return ;
        }else{
        temp->next=top;
        top=temp;
        size++;
        }
    }

    //pop operation
    void pop(){
        if(top==NULL){
            cout<<"stack underflow\n";
            return;
        }else{
            node *temp=top;
            cout<<"top data";
            top=top->next;
            delete temp;
            size--;
        }
    }
    //peek operation
    int peek(){
        if(top==NULL){
            cout<<"stack is empty\n";
            return -1;
        }
        else{
            return top->data;
        }
    }
    //isempty
    bool isempty(){
        return top==NULL;
    }
    //int size
    int issize(){
        return size;
    }

};

int main(){
    stack s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.pop();
    cout<<s.peek()<<endl;
    cout<<s.isempty()<<endl;
    s.issize();
}
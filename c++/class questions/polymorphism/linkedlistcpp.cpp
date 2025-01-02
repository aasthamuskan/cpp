#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int value){
        data=value;
        next=NULL;
    }
};
int main(){
    node* head= new node(5);
    head->next= new node(10);
    head->next->next=new node(45);
    node* current=head;
    while(current!=NULL){
        cout<<current->data<<endl;
        current=current->next;
    }
}
    
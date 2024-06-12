#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the value of a"<<endl;
    cin>>a;
    cout<<"enter the value of b"<<endl;
    cin>>b;
    char op;
    cout<<"enter the operator"<<endl;
    cin>>op;
    switch(op){
        case '+':
        cout<<"the sum of a and b is "<<a+b<<endl;
        break;
        case '-':
        cout<<"the difference of a and b is "<<a-b<<endl;
        break;
        case '*':
        cout<<"the product of a and b is "<<a*b<<endl;
        break;
        case '/':
        if(b!=0){
            cout<<"the division of a and b is "<<a/b<<endl;}
            else{
                cout<<"division by zero is not allowed"<<endl;}
                break;
                default:
                cout<<"invalid operator"<<endl; 
                }
                return 0;
                }

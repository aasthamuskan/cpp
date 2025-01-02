#include<iostream>
using namespace std;
inline int multiply(int x,int y){
    return x*y;
}
int divide(int x ,int y){
    return (x/y);
}

int main(){
    int num1,num2;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2;
    cout<<"the multiply of two num is: "<<multiply(num1,num2)<<endl;
    cout<<"the division of two numbeer is: "<<divide(num1,num2);
}
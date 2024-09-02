#include<iostream>
using namespace std;
void swap(int &a, int &b){
    int temp=a;
    a=b;
    b=temp;
    cout<<"after the swap in func:"<<"a="<<a<<"b="<< b <<endl;

}
int main(){
    int a=5,b=10;
    swap(a,b);
        cout<<"after the swap in main:"<<"a="<<a<<"b="<<b<<endl;

}
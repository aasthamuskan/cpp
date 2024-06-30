#include<iostream>
using namespace std;
int main(){
    int num =5;
    int a=num;
    cout<<"a before"<<num<<endl;
    a++;
    cout<<"a after"<<a<<endl;
    int *p =&num;
    cout<<"p before"<<num<<endl;
    *p++;
    cout<<"p after"<<*p<<endl;
    int *q=p;
    cout<<"q before"<<*q<<endl;
    q++;
    cout<<"q after"<<*q<<endl;
    int i=3;
    int *t=&i;
    cout<<"t before"<<*t<<endl;
    *t=*t+1;
    cout<<"t after"<<*t<<endl;
    return 0;

}
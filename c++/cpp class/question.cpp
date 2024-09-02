#include<iostream>
using namespace std;
void func(int *p,int q){
    *p=10;
    q=*p;
    q++;
    *p=q;
    cout<<p<<*p<<q<<endl;
}
int main()
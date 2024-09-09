#include<iostream>
using namespace std;
int main(){
    int a=52;
    int *ptr=&a;
    int **pptr=&ptr;
    cout<<a<<ends<<*ptr<<ends<<**pptr<<endl;
    cout<<&a<<ends<<ptr<<ends<<*pptr<<endl;
}
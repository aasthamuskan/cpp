#include<iostream>
using namespace std;
int main(){
    int num=5;
    cout<<num<<endl;
    cout<<"address of num   "<<&num << endl;
    int *ptr = &num;
    cout<<"value "<<*ptr << endl;
    double d=4.3;
    double *p2=&d;
    cout<<"value "<<*p2 << endl;
    cout <<"address is "<<*p2<<endl;
    cout<<"size of integer is"<<sizeof(num)<<endl;
    cout<<"size of double is"<<sizeof(d)<<endl;
    cout<<"size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"size of pointer is"<<sizeof(p2);
    return 0;
}
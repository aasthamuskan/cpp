#include<iostream>
using namespace std;
int main(){
    int a=4;
    double b=1.90;
    char c='+';
    int si=sizeof(a),sd=sizeof(b),sc=sizeof(c);
    cout<<"size of integer is "<<si<<" bytes"<<endl;
    cout<<"size of double is "<<sd<<" bytes"<<endl;
    cout<<"size of char is "<<sc<<" bytes"<<endl;
}
#include<iostream>
using namespace std;
int main(){
    int n,fac;
    cout<<"enterr the no: ";
    cin>>n;
    fac=1;
    while(n>0){
        fac*=n;
        n-=1;

    }
    cout<<endl<<"factorial= "<<fac;
    return 0;
}
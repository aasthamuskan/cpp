#include<iostream>
using namespace std;
int main(){
    int n,i,prd;
    cout<<"enter the  number: ";
    cin>>n;
    i=1;
    prd=1;
    while(n>0){
        prd*=n%10;
        n/=10;
        i+=1;
    }
    cout<<prd;
    return 0;
}
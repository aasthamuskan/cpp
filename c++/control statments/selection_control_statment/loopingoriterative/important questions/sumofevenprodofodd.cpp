#include<iostream>
using namespace std;
int main(){
    int n,i,prd,sum=0,d;
    cout<<"enter the  number: ";
    cin>>n;
    i=1;
    prd=1;
    while(n>0){
        d=n%10;
        if(d%2==0){
            sum+=d;

        }else{
            prd*=d;
        }
        n/=10;//yaha to increment use hi nahi hua reason
    }
    cout<<"sum of even "<<sum;
    cout<<"prd of odd "<<prd;

    return 0;
}
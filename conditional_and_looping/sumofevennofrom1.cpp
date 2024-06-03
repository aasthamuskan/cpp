#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no";
    cin>>n;
    int sum=0;
    int i=0;
    while(i<=n){
        if (i%2==0)
        sum+=i;
        i+=1;


    }
    cout<<"sum from"<<1<<"to"<<n<<"="<<sum<<endl;
    return 0;
    }
#include<iostream>
using namespace std;
int main(){
    int n,i,sum;
    cout<<"enter the  number: ";
    cin>>n;
    i=1;
    sum=0;
    while(i<=n){
        sum+=i;
        i+=1;
    }
    cout<<sum;
    return 0;
}
#include<iostream>
using namespace std;
int power(int a,int b){
    int ans=1;
    for(int i=0;i<b;i++){   
        ans*=a;
}
return ans;
}
int main(){
    int a,b;
    cout<<"Enter the base and exponent respectively: ";
    cin>>a>>b;
    cout<<"The result of "<<a<<" raised to the power of "<<b<<" is: "<<
    power(a,b);
    return 0;
    }
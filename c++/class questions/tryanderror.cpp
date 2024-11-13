#include<iostream>
using namespace std;
int main(){
    int a,b,c,z,r;
    cout<<"enter three number: ";
    cin>>a>>b>>c;
    try{
        z=a-b;
        cout<<a<<" "<<b;
        if(z==0){
            throw 1;
        }
        else{
            r=c/z;
            cout<<"result is: "<<r;
        }
    }
    catch(int x){
        cout<<"invalid : division by 0";
    }
    cout<<"some state after!";
}
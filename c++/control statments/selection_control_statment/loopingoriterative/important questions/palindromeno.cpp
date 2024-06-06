#include<iostream>
using namespace std;
int main(){
    int i,rev=0,org;
    cout<<"enter number: ";
    cin>>i;
    org=i;
    while(i>0){
        rev=(rev*10)+i%10;
        i/=10;

    }
    if(rev==org){
        cout<<"its a palindrome no";

    }else{
        cout<<"its not a pallindrome no";
    }

    return 0;
}

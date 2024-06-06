#include<iostream>
using namespace std;
int main(){
    int i,rev=0;
    cout<<"enter number: ";
    cin>>i;
    while(i>0){
        rev=(rev*10)+i%10;
        i/=10;

    }
    cout<<"reverse no is: "<<rev;
    return 0;
}

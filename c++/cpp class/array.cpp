#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the num of elements";
    cin>>n;
    int a[100];
    cout<<"enter "<<n<<"elements";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0i<n;i++){
        cout<<a[i]<<ends<<i[a]<<endl;
    }
    int value,pos;
    cout<<"enter the pos in which inserted";
    cin>>pos;
    cout<<"enter iem to be inserted";
    cin>>value;
    for(int i=n-1;i>=pos;i--){
        a[i+1]=a[i];

    }
    

}
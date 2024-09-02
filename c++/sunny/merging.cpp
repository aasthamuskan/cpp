#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int ar[100];
    int size;
    cin>>size;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int si;
    cin>>si;
     for(int i=0;i<si;i++){
        cin>>ar[i];
    }
    int sum=size+si;
    int a[100];
    for(int i=0;i<size;i++){
        a[i]=arr[i];
    }
    for(int i=0;i<sum;i++){
        a[size+i]=ar[i];
    }
    for(int i=0;i<sum;i++){
        if(a[i]%2==0){
            cout<<a[i]<<" ";
        }
    }
     for(int i=0;i<sum;i++){
        cout<<" ";
    }
}
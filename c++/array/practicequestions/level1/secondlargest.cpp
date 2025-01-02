#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<=n;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    int secondmax=arr[0];
    for(int i=1;i<=n;i++){
        if(arr[i]>secondmax && arr[i]<max){
            secondmax=arr[i];
        }
    }
    cout<<secondmax;
    return 0;
}
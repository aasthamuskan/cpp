#include<iostream>
using namespace std;
int main(){
    int seach,i,n;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>seach;
    for(i=0;i<n;i++){
        if(a[i]==seach){
            cout<<"Element found at index "<<i+1<<endl;
            break;
        }
    }
    if(i>=n){
        cout<<"Element not found"<<endl;
    }
    return 0;
    }
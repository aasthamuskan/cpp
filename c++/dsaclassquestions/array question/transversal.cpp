#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int expenses[n];
    for(int i=0;i<n;i++){
        cin>>expenses[i];
    }
    if(n=1){
        cout<<"0"<<endl;
        return 0;
    }
    int totalsum = 0;
    for(int i=0;i<n;i++){
        totalsum+=expenses[i];
    }
    int minsubarray =   INT16_MAX;
    int currentsubarraysum = 0;

    for(int i=0;i<n;i++){
        currentsubarraysum+=expenses[i];
        if(currentsubarraysum<minsubarray)
        {
            minsubarray=currentsubarraysum;
        }
        if(currentsubarraysum>0){
            currentsubarraysum=0;
        }
    }
int maxremainingsum=totalsum +minsubarray;
if(totalsum==minsubarray){
    maxremainingsum=0;
}
cout<<maxremainingsum<<endl;
return 0;
}

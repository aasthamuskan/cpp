#include<iostream>
using namespace std;
int getsum(int *arr,int size){
    //base case
    if(size==0){
        return 0;
        }
    if(size==1){
        return arr[0];
    }  
    return arr[0]+getsum(arr+1,size-1);
}

int main(){
    int arr[5]={2,4,9,9,9};
    cout<<getsum(arr,5);
    return 0;
}

#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5};
    int size=5;
    //deletion at the begning
    for(int i=0;i<size-1;i++){
        array[i]=array[i+1];
    }
    size--;
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;
    
}
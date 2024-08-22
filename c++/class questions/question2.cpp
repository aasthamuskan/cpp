#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    int size=sizeof(arr)/sizeof(arr[0]);
    int i =0;
    cout<<"arrays elements:"<<endl;
    while(i<size){
        cout<<"arr[%d]=%d"<<i<<arr[i];
        i++;
    }
    return 0;
}
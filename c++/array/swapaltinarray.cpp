#include<iostream>
using namespace std;
void printary(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
        }
        cout<<endl;
}
void swapalt(int arr[],int size){
    for(int i=0;i<size-1;i=i+2){
        if (i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int even[8]={5,6,2,3,4,9,6,4};
    int odd[7]={5,6,2,3,4,9,6};
    swapalt(even,8);
    printary(even,8);
    cout<<endl;
    swapalt(odd,7);
    printary(odd,7);
}
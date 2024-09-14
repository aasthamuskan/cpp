#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
      // Remove element at certain position
    int pos;
    cout<<"Enter the position of the element to remove (1-" << n << "): ";
    cin>>pos;
    
    // Check if position is valid
    if(pos < 1 || pos > n){
        cout<<"Invalid position!"<<endl;
        return 1;
    }
    
    // Shift elements to the left
    for(int i=pos-1;i<n-1;i++){
        arr[i] = arr[i+1];
    }
    
    // Decrement array size
    n--;
    
    // Display updated array elements
    cout<<"Updated array elements: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
    return 0;
}

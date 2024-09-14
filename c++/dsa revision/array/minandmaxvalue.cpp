#include<iostream>
using namespace std;
int main(){
    int a[100];
    int n;
    cout<<"enter the number: ";
    cin>>n;
    
    // Initialize array elements
    for(int i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> a[i];
    }

    // Accessing array elements
    cout << "Array elements: ";
    for(int i=0; i<n; i++){
        cout << a[i] << " ";
    }
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max){
            max=a[i];
        }
    }
    cout<<"the maximum element is: "<<max;
    int min
}

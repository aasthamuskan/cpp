#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"enter the size of array: ";
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"enter the element "<<i+1<<": ";
        cin>>arr[i];
        cout << arr[i] << " ";
    }
    cout << "Array elements: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //insertion code
       int pos, val;
    cout << "Enter the position to insert (1-" << n << "): ";
    cin >> pos;
    cout << "Enter the value to insert: ";
    cin >> val;

    // Shift elements to the right of the insertion position
    for(int i=n; i>=pos; i--){
        arr[i] = arr[i-1];
    }

    // Insert the new element
    arr[pos-1] = val;

    // Print the updated array
    cout << "Updated array elements: ";
    for(int i=0; i<=n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

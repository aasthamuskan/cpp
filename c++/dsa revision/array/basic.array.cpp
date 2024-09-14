//linear data structure where elements are stored in sequential order
//store similar type of data in large qty
//syntax for making array
#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    // Create a static array with n elements
    int arr[n];

    // Initialize array elements
    for(int i=0; i<n; i++){
        cout << "Enter element " << i+1 << ": ";
        cin >> arr[i];
    }

    // Accessing array elements
    cout << "Array elements: ";
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}


#include <iostream>
#include<bits/stdc++.h>
#include <algorithm> // For sort, reverse, find, max_element, min_element
#include <numeric>   // For accumulate
using namespace std;

int main() {
    int n;

    // Input size of the array
    cout << "Enter the number of elements: ";
    cin >> n;

    // Declare an array of size n
    int arr[n];
    
    // Input elements of the array
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // 1. Sorting the array in ascending order
    sort(arr, arr + n);
    cout << "Array sorted in ascending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 2. Sorting the array in descending order
    sort(arr, arr + n, greater<int>());
    cout << "Array sorted in descending order: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 3. Reversing the array
    reverse(arr, arr + n);
    cout << "Array after reversing: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // 4. Finding the minimum element
    int minElem = *min_element(arr, arr + n);
    cout << "Minimum element: " << minElem << endl;

    // 5. Finding the maximum element
    int maxElem = *max_element(arr, arr + n);
    cout << "Maximum element: " << maxElem << endl;

    // 6. Calculating the sum of all elements
    int sum = accumulate(arr, arr + n, 0);
    cout << "Sum of all elements: " << sum << endl;

    // 7. Searching for an element (find function)
    int key;
    cout << "Enter element to search: ";
    cin >> key;
    
    auto it = find(arr, arr + n, key);
    if (it != arr + n) {
        cout << "Element " << key << " found at index " << distance(arr, it) << endl;
    } else {
        cout << "Element " << key << " not found" << endl;
    }

    // 8. Checking if array is sorted
    bool isSorted = is_sorted(arr, arr + n);
    cout << "Is the array sorted? " << (isSorted ? "Yes" : "No") << endl;
    return 0;
}
//deletion or insertion
#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Step 1: Input the array from the user
    vector<int> arr;  // Declare a vector to store the user input
    int size, element, index;

    cout << "Enter the number of elements: ";
    cin >> size;

    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> element;
        arr.push_back(element);  // Add elements to the vector
    }

    // Step 2: Insert an element at a specified index
    cout << "Enter the index where you want to insert: ";
    cin >> index;
    if (index >= 0 && index <= arr.size()) {
        cout << "Enter the element to insert: ";
        cin >> element;
        arr.insert(arr.begin() + index, element);  // Insert element at the index
        cout << "Element inserted successfully." << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    // Step 3: Delete an element at a specified index
    cout << "Enter the index of the element you want to delete: ";
    cin >> index;
    if (index >= 0 && index < arr.size()) {
        arr.erase(arr.begin() + index);  // Delete element at the index
        cout << "Element deleted successfully." << endl;
    } else {
        cout << "Invalid index!" << endl;
    }

    // Step 4: Print the current array
    cout << "Current array: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers and populate it with some elements
    list<int> myList = {10, 20, 30, 40, 50};

    // Delete the first element
    myList.pop_front();

    // Delete the last element
    myList.pop_back();

    // Delete an element at a specific position (e.g., the second element)
    auto it = myList.begin();  // Get an iterator to the beginning of the list
    advance(it, 1);  // Move the iterator to the second element
    myList.erase(it);  // Erase the element at the iterator's position

    // Traverse and print the list after deletion
    cout << "List elements after deletion: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

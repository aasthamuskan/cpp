#include <iostream>
#include <list>

using namespace std;

int main() {
    // Create a list of integers
    list<int> myList;

    // Insert elements at the end of the list (equivalent to push_back)
    myList.push_back(10);
    myList.push_back(20);

    // Insert element at the beginning of the list
    myList.push_front(5);

    // Insert element at a specific position (after the first element)
    auto it = myList.begin();
    advance(it, 1);  // Move the iterator to the second position
    myList.insert(it, 15);  // Insert 15 after the first element

    // Traverse and print the list
    cout << "List elements after insertion: ";
    for (int value : myList) {
        cout << value << " ";
    }
    cout << endl;

    return 0;
}

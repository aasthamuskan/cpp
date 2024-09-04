#include <iostream>
#include <list>
#include <algorithm>

using namespace std;

int main() {
    list<int> myList = {1, 2, 3, 4, 5};

    // Element to search for
    int valueToFind = 3;

    // Using find to search for the element
    auto it = find(myList.begin(), myList.end(), valueToFind);

    if (it != myList.end()) {
        cout << "Element " << valueToFind << " found in the list." << endl;
    } else {
        cout << "Element " << valueToFind << " not found in the list." << endl;
    }

    return 0;
}

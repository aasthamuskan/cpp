#include <iostream>
using namespace std;

// Node class represents each node in a linked list
class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to manage the linked list
class LinkedList {
public:
    Node* head;

    LinkedList() {
        head = nullptr;
    }

    // Function to insert a new node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);

        if (head == nullptr) {
            head = newNode;
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }

    // Function to search for an element in the list
    bool search(int key) {
        Node* temp = head;

        while (temp != nullptr) {
            if (temp->data == key) {
                return true;  // Element found
            }
            temp = temp->next;
        }

        return false;  // Element not found
    }

    // Function to traverse the linked list and print each node's data
    void traverse() {
        Node* temp = head;
        while (temp != nullptr) {
            cout << temp->data << " ";
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Insert elements
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);
    list.insertAtEnd(40);
    list.insertAtEnd(50);

    // Traverse and print the list
    cout << "Linked list: ";
    list.traverse();

    // Search for an element
    int key = 30;
    if (list.search(key)) {
        cout << "Element " << key << " found in the list." << endl;
    } else {
        cout << "Element " << key << " not found in the list." << endl;
    }

    key = 60;
    if (list.search(key)) {
        cout << "Element " << key << " found in the list." << endl;
    } else {
        cout << "Element " << key << " not found in the list." << endl;
    }

    return 0;
}

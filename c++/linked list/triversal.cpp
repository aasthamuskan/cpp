#include <iostream>
using namespace std;

// Node class represents each node in a linked list
class Node {
public:
    int data;  // This variable stores the value of the node
    Node* next;  // Pointer to the next node in the list

    // Constructor to initialize the node with a value and set next to nullptr
    Node(int value) {
        data = value;
        next = nullptr;
    }
};

// LinkedList class to manage the linked list
class LinkedList {
public:
    Node* head;  // Pointer to the first node of the list

    // Constructor to initialize the linked list with head as nullptr
    LinkedList() {
        head = nullptr;
    }

    // Function to add a new node at the end of the list
    void append(int value) {
        Node* newNode = new Node(value);  // Create a new node with the given value

        // If the list is empty, make the new node the head
        if (head == nullptr) {
            head = newNode;
            return;
        }

        // Otherwise, traverse to the end of the list
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }

        // Link the last node to the new node
        temp->next = newNode;
    }

    // Function to traverse the linked list and print each node's data
    void traverse() {
        Node* temp = head;  // Start from the head of the list

        // Traverse the list until the end (i.e., until temp is nullptr)
        while (temp != nullptr) {
            cout << temp->data << " ";  // Print the data of the current node
            temp = temp->next;  // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;  // Create an empty linked list

    // Append nodes to the linked list
    list.append(10);
    list.append(20);
    list.append(30);

    // Traverse the list and print the elements
    cout << "Elements in the linked list: ";
    list.traverse();

    return 0;
}

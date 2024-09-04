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

    // Function to insert a new node at the beginning
    void insertAtBeginning(int value) {
        Node* newNode = new Node(value);  // Create a new node
        newNode->next = head;  // Point the new node's next to the current head
        head = newNode;  // Make the new node the new head
    }

    // Function to insert a new node at the end
    void insertAtEnd(int value) {
        Node* newNode = new Node(value);  // Create a new node

        if (head == nullptr) {
            head = newNode;  // If the list is empty, make the new node the head
            return;
        }

        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;  // Traverse to the end of the list
        }
        temp->next = newNode;  // Link the last node to the new node
    }

    // Function to insert a new node after a given node
    void insertAfterNode(Node* prevNode, int value) {
        if (prevNode == nullptr) {
            cout << "Previous node cannot be null" << endl;
            return;
        }

        Node* newNode = new Node(value);  // Create a new node
        newNode->next = prevNode->next;  // Point the new node's next to the previous node's next
        prevNode->next = newNode;  // Link the previous node to the new node
    }

    // Function to traverse the linked list and print each node's data
    void traverse() {
        Node* temp = head;  // Start from the head of the list
        while (temp != nullptr) {
            cout << temp->data << " ";  // Print the data of the current node
            temp = temp->next;  // Move to the next node
        }
        cout << endl;
    }
};

int main() {
    LinkedList list;

    // Insert elements
    list.insertAtBeginning(30);
    list.insertAtBeginning(20);
    list.insertAtEnd(40);
    list.insertAtEnd(50);
    list.insertAfterNode(list.head, 25);  // Insert 25 after the first node (head)

    // Traverse and print the list
    cout << "Linked list elements: ";
    list.traverse();

    return 0;
}

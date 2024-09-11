// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the end of the linked list
void insertAtEnd(Node** head, int newData) {
    // Create a new node with the given data
    Node* newNode = new Node();
    newNode->data = newData;
    newNode->next = NULL;

    // If the list is empty, set the new node as the head
    if (*head == NULL) {
        *head = newNode;
        return;
    }

    // Traverse the list to find the last node
    Node* lastNode = *head;
    while (lastNode->next != NULL) {
        lastNode = lastNode->next;
    }

    // Insert the new node at the end of the list
    lastNode->next = newNode;
}

// Example usage:
int main() {
    Node* head = NULL;

    // Insert some nodes into the list
    insertAtEnd(&head, 1);
    insertAtEnd(&head, 2);
    insertAtEnd(&head, 3);

    // Print the list to verify
    Node* temp = head;
    while (temp != NULL) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << std::endl;

    return 0;
}
#include <iostream>
using namespace std;

// Node structure
struct Node {
    int data;
    Node* next;
};

// Function to insert a node at the end of the list
void insertAtEnd(Node*& head, int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;

    if (head == nullptr) {
        // If list is empty, new node becomes the head
        head = newNode;
    } else {
        // Traverse to the last node
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        // Link last node to new node
        temp->next = newNode;
    }
}

// Function to print the list
void printList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

int main() {
    Node* head = nullptr;

    // Inserting nodes
    insertAtEnd(head, 10);
    insertAtEnd(head, 20);
    insertAtEnd(head, 30);
    insertAtEnd(head, 40);

    cout << "Linked list before insertion:" << endl;
    printList(head);

    // Insert a new node with data 50
    insertAtEnd(head, 50);

    cout << "Linked list after insertion:" << endl;
    printList(head);

    return 0;
}

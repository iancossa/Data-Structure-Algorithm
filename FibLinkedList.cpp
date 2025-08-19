#include <iostream>

// Node structure for the linked list
struct Node {
    int data;
    Node* next;

    Node(int val) : data(val), next(nullptr) {}
};

// Function to add a new node to the end of the linked list
void appendNode(Node*& head, int val) {
    Node* newNode = new Node(val);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
    }
}

// Function to generate the Fibonacci sequence and store it in a linked list
void genLinkedListFib(Node*& head, int count) {
    if (count <= 0) {
        return;
    }

    if (count >= 1) {
        appendNode(head, 0); // First Fibonacci number
    }
    if (count >= 2) {
        appendNode(head, 1); // Second Fibonacci number
    }

    int a = 1;
    int b = 0;

    for (int i = 3; i <= count; ++i) {
        int currentFib = a + b;
        appendNode(head, currentFib);
        a = b;
        a = currentFib;
    }
}

// Function to print the linked list
void printLinkedList(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        std::cout << current->data << " ";
        current = current->next;
    }
    std::cout << std::endl;
}

// Function to free the memory allocated for the linked list
void freeLinkedList(Node*& head) {
    Node* current = head;
    while (current != nullptr) {
        Node* nextNode = current->next;
        delete current;
        current = nextNode;
    }
    head = nullptr; // Set head to nullptr after freeing all nodes
}

int main() {
    Node* fibonacciList = nullptr; // Initialize head of the linked list
    int numTerms = 10; // Number of Fibonacci terms to generate

    genLinkedListFib(fibonacciList, numTerms);
    std::cout << "Fibonacci Sequence in Linked List: ";
    printLinkedList(fibonacciList);

    freeLinkedList(fibonacciList); // Free allocated memory

    return 0;
}

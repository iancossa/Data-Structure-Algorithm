#include <stdio.h> 

// Define the maximum size of the stack
#define MAX_SIZE 5

// Global array to store stack elements
int stack[MAX_SIZE];
// Global variable to keep track of the top element of the stack
// -1 indicates an empty stack
int top = -1;


int isEmpty() {
    // If top is -1, the stack contains no elements
    if (top == -1) {
        return 1; // True, stack is empty
    } else {
        return 0; // False, stack is not empty
    }
}


int isFull() {
    // If top reaches MAX_SIZE - 1, the stack is full
    if (top == MAX_SIZE - 1) {
        return 1; // True, stack is full
    } else {
        return 0; // False, stack is not full
    }
}


void push(int value) {
    // Check if the stack is full before pushing
    if (isFull()) {
        printf("Stack Overflow: Cannot push %d, stack is full.\n", value);
    } else {
        // Increment top and then add the value to the new top position
        stack[++top] = value;
        printf("Pushed: %d\n", value);
    }
}


void pop() {
    // Check if the stack is empty before popping
    if (isEmpty()) {
        printf("Stack Underflow: Cannot pop, stack is empty.\n");
    } else {
        // Print the value at the current top, then decrement top
        printf("Popped: %d\n", stack[top--]);
    }
}


void peek() {
    // Check if the stack is empty before peeking
    if (isEmpty()) {
        printf("Peek: Stack is empty.\n");
    } else {
        // Print the value at the current top
        printf("Peek: Top element is %d\n", stack[top]);
    }
}

/**
 * @brief Displays all elements in the stack from top to bottom.
 */
void display() {
    if (isEmpty()) {
        printf("Stack: (empty)\n");
    } else {
        printf("Stack elements (Top to Bottom): ");
        // Loop from the current top down to the bottom (index 0)
        for (int i = top; i >= 0; i--) {
            printf("%d ", stack[i]);
        }
        printf("\n");
    }
}


int main() {
    printf("--- Stack Operations Demonstration ---\n\n");

    // 1. Check if the stack is empty initially
    printf("Is stack empty? %s\n", isEmpty() ? "Yes" : "No");
    display(); // Display the empty stack

    // 2. Push elements onto the stack
    push(10);
    push(20);
    push(30);
    display();

    // 3. Peek at the top element
    peek();

    // 4. Push more elements, testing full condition
    push(40);
    push(50);
    display();

    // 5. Try to push to a full stack
    push(60);
    display();

    // 6. Pop elements from the stack
    pop();
    display();
    pop();
    display();

    // 7. Peek after pops
    peek();

    // 8. Pop remaining elements
    pop();
    pop();
    pop(); // This will attempt to pop from an empty stack
    display();

    // 9. Check if the stack is empty again
    printf("Is stack empty? %s\n", isEmpty() ? "Yes" : "No");

    return 0; // Indicate successful execution
}

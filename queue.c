#include <stdio.h>
#define SIZE 100

int queue[SIZE];
int front = -1, rear = -1;

void enqueue(int value) {
    if (rear == SIZE - 1) {
        printf("Queue is full (Overflow)\n");
        return;
    }
    if (front == -1)
        front = 0;
    rear++;
    queue[rear] = value;
    printf("%d enqueued to queue.\n", value);
}

void dequeue() {
    if (front == -1 || front > rear) {
        printf("Queue is empty (Underflow)\n");
        return;
    }
    printf("%d dequeued from queue.\n", queu
printf("%d dequeued from queue.\n", queue[front]);
    front++;
}

void display() {
    if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
    printf("Queue elements are: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

void peek() {
    if (front == -1 || front > rear) {
        printf("Queue is empty (Nothing to peek).\n");
    } else {
        printf("Front element is: %d\n", queue[front]);
void search(int value) {
    if (front == -1 || front > rear) {
        printf("Queue is empty (Nothing to search).\n");
        return;
    }
    for (int i = front; i <= rear; i++) {
        if (queue[i] == value) {
            printf("%d found at position %d in queue.\n", value, i - front);
            return;
        }
    }
    printf("%d not found in the queue.\n", value);
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    peek();            // Show front element
    search(20);        // Should find it
    search(40);        // Should not find it

    dequeue();
    display();

    peek();
    dequeue();
    dequeue();
    dequeue(); // Testing underflow

    return 0;
}

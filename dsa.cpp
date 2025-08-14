#include <iostream>
#define MAX 100

class Stack {
private:
    int arr[MAX];
    int top;

public:
    Stack() {
        top = -1;
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == MAX - 1;
    }

    void push(int x) {
        if (isFull()) {
            std::cout << "Stack Overflow\n";
            return;
        }
        arr[++top] = x;
    }

    void pop() {
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return;
        }
        top--;
    }

    int peek(){
        if (isEmpty()) {
            std::cout << "Stack is empty\n";
            return -1;
        }
        return arr[top];
    }

    void display(){
        if (isEmpty()) {
            std::cout << "Stack Underflow\n";
            return;
        }
        std::cout << "Stack element :: ";
        for(int i=top; i>=0; i--){
            std::cout << arr[i] << " ";
        }
        std::cout << "\n";
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);

    s.display();  s.display();

    std::cout << "top element is :: " << s.peek() <<"\n";

    s.pop();
    s.display();

    return 0;
}

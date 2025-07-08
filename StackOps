//Stack Operations
#include <stdio.h>
#define SIZE 25

int stack[SIZE];
int top =-1;
void push(int value){
    if(top== SIZE - 1){
        printf("Stack Overflow\n");
    }else{
        stack[++top] = value;
    }
}
void pop(){
    if(top == -1){//check if the stack is empty
        printf("Stack is Empty\n");
    }else{
        printf("Popped: %d\n", stack[top--]);
    }
}
void peek(){//peek an element without removing it
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Top Element:%d\n",stack[top]);
    }
}
void traserve(){//access and remove the tpo element by recursion
    if(top == -1){
        printf("Stack is empty\n");
    }else{
        printf("Stack: ");
        for(int i=top;i>=0;i--){
            printf("%d",stack[i]);
            printf("\n");
        }
    }
}
void search(int value){
    for(int i=top;i>=0;i--){
        if(stack[i]==value){
            printf("Found %d at position %d from top\n",value,top -i);
            return;
        }
    }
    printf("%d not found in the stack\n",value);
}
//Function to display the stack elements
void display(){
    if(top== -1){
        printf("Stack is empty");
    }else{
        printf("Stack elements:\n");
        for(int i =top;i>=0;i--){//printing elements from top to buttom
            printf("%d\n",stack[i]);
        }
    }
}


int main() {
    push(10);//10 added
    display();
    push(5);//add 5
    display();
    traserve();//access only the top element
    display();
    peek();//peek top element without removing
    display();
    search(11);
    display();
    pop();//remove the top element
    display();
    traserve();
    display();
    
    
    
    

    return 0;
}

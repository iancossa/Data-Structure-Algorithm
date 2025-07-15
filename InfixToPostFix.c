
#include <stdio.h>
#include <ctype.h>
#define SIZE 20
char stack[SIZE];
int top =-1;


void push(char ch){
    stack[++top]=ch;
}
char pop(){
    return stack[top--];
}
char peek(){
    return stack[top];
}
int is_empty(){
    return top ==-1;
}
int precedence(char op){
    if(op == '+' || op =='-')return 1;
    if(op == '*' || op =='/')return 2;
    return 0;
}

void infix_to_postfix(char *exp) {
    char result[SIZE];
    int k = 0;

    for(int i = 0; exp[i] != '\0'; i++){
        char ch = exp[i];
        if(isalnum(ch)){
            result[k++] = ch;
        } else if(ch == '('){
            push(ch);
        } else if(ch == ')'){
            while(!is_empty() && peek() != '(')
                result[k++] = pop();
            pop();  // remove '('
        } else {
            while(!is_empty() && precedence(peek()) >= precedence(ch))
                result[k++] = pop();
            push(ch);
        }
    }

    while(!is_empty())
        result[k++] = pop();

    result[k] = '\0';
    printf("Postfix: %s\n", result);
}

int main() {
    char exp[]="A+B*(C-D)/E";
    printf("Infinix: %s\n",exp);
    infix_to_postfix(exp);
    return 0;

}

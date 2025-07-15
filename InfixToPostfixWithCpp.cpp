#include <iostream>
#include <stack>
#include <string>
using namespace std;

//Check if character is an operand and (digit 1-9)
bool isDigit(char c){
    return c >='1' && c<='9';
}
//Return precedence of operators
int priority(char op){
    if(op == '+' || op == '-')return 1;
    if(op == '*' || op == '/')return 2;
    return 0; //for '(' and ')'
}
//Main function to convert infix to postfix
string infixToPostfix(string infix){
    stack<char> st;
    string postfix="";

    for(size_t i=0;i<infix.length();){
        char c= infix[i];

        cout <<"Working on character:"<< c << endl;
        if(isDigit(c)){
            postfix +=c;
            i++;
        }
        else if(c=='('){
            st.push(c);
            i++;
        }
        else if(c==')'){
            while(!st.empty()){
                char top = st.top(); st.pop();
                if(top == '(')break;
                postfix +=top;
            }
            i++;
        }
        else if(st.empty()||priority(c)>priority(st.top())){
            st.push(c);
            i++;
        }
        else{
            postfix +=st.top();
            st.pop();
        }
    }
    while(!st.empty()){
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

int main() {
    string infix;

    cout <<"Enter the infix expression: ";
    cin >> infix;

    string postfix = infixToPostfix(infix);

    cout << "Final postfix expression: "<< postfix << endl;

    return 0;
}

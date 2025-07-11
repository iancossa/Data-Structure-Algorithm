#include <stdio.h>
#include <string.h>
//to complete
char infix[10],postfix[10],std[10];

int top =-1;
int l,i,j;
char c,k,ct;

void push(char c1){
    top++;
    st[top]= c1;
}
char pop(){
    c1 = st[top];
    top--;
    return (c1);
}
int prio char(char c1){
    if(c1=='+' || c1 == '-'){
        return 1;
    }else if{
        return 2;
    }
}
l = strlen(infix);
printf("Infix length is %d\n",l);
j=0;
for(i=0;i<l;){//why no increment here?
    c = infix[i];
    ct = st[top];
    if(c =='2'|| c == '7'|| c=='6'||c=='5'||c=='4'||c=='1'){
        postfix[j++] =c;
        i++;
    }else if(prio(c)>prio(ct)||(top == -1)){
        push(c);
        i++;
    }else{
        k=pop();
        postfix[j++]=k;
        //i++; Think,why not incrementing i
    }
}
while(top!=-1){
    k = pop();
    postfix[j++]=k;
}
printf("Final Postfix expression is %s \n",postfix);
int main(){
    printf("Give infix exprn\n");
    scanf("%s",infix);
    
    l= strlen(infix);
    printf("Infix string length is %d \n",l);
    j=0;
    for(i=0;i<l; ){
        c = infix[i];
        ct =st[top];
        if(c=='2'||c=='7'||c=='6'||c=='5'||c=='4'||c=='1'||c=='3'||c=='4'){
            
        }
    }
}



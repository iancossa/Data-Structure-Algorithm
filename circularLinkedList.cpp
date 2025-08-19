#include <iostream>
using namespace std;
class Node
{
    public:
    int data;
    Node *next;
    Node *prev;
    Node(int data)
    {
        this->data=data;
        this->prev=NULL;
        this->next=NULL;
    }
};



int main() {
    
    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);

    
    // node1 <-> node2 <-> node3
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node1;
    Node *temp=node1;
    
    /*
    for single linkedlist
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    */

    //for cicular 
    do{
         cout<<temp->data<<" ";
         temp=temp->next;
        
    }while(temp!=node1);
    
    
    
        // Free the allocated memory to prevent memory leaks
        free(node1);
        free(node2);
        free(node3);
    
        return 0;
    }

#include <iostream>
using namespace std;

    // Write C++ code here
struct Node{
    int data;
    Node *next;
};
  int main() { 
      //Creating 3 nodes using dynamic memory
      Node * head=new Node;
      Node * second=new Node;
      Node * third=new Node;
      //Assigning values to nodes
      head->data=10;
      head->next=second;
      
      second->data=20;
      second->next=third;
      
      third->data=30;
      third->next=NULL;
      
      //Traversing & printing linked lis
        Node*temp=head;
              while(temp!=NULL){
                  cout<<temp->data<<"";
                  temp=temp->next;
              }
            
            return 0;
        }

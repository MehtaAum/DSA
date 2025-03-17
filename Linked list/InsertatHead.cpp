#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    //constructor
    node(int data){
        this-> data = data;
        this-> next = NULL;
    }
};

void insertatHead (node* &head , int d){

     node* temp = new node(d);
     temp-> next = head;
     head = temp;
}

void print(node* &head){

    node* temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" "<<temp->next<<endl;
        temp = temp -> next;
    }
    
  
}

int main() {

  node* node1 = new node(20);

  node* head = node1;

  insertatHead(head , 10);
  insertatHead(head , 12);
  insertatHead(head , 13);


  print(head);  

  



}
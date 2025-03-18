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

// void insertatHead (node* &head , int d){
//      //new node create
//      node* temp = new node(d);
//      temp-> next = head;
//      head = temp;
// }

void insertatTail (node* &tail , int d){
    //new node create
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
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
  node* tail = node1;
  
  insertatTail(tail , 10);
  insertatTail(tail , 12);
  insertatTail(tail , 16);

  print(head);  

  



}
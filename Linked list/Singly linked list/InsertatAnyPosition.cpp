//( insert at any position )
    // Inserting at the head (position 1)
    // Inserting in the middle
    // Inserting at the tail

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

// Insert a new node at the beginning (head)
void insertatHead (node* &head , int d){
     //new node create
     node* temp = new node(d);
     temp-> next = head;
     head = temp;
}

// Insert a new node at the end (tail)
void insertatTail (node* &tail , int d){
    //new node create
    node* temp = new node(d);
    tail -> next = temp;
    tail = temp;
}

// Insert a new node at a specific position
void insertatPosition(node* &tail , node* &head , int position , int d){
 
    //case
    if(position == 1){
     insertatHead(head,d);
     return;
    }

    node* temp = head;
    int cnt = 1;

     // Move to the node just before the target position
    while(cnt < position-1){
      temp = temp -> next;
      cnt++;
    }

    // If inserting at the last position, update tail
    if(temp -> next == NULL){
      insertatTail(tail, d);
      return;   
    }

    // Create new node and insert it in the correct position
    node*  nodetoinsert =  new node(d); 
    nodetoinsert -> next = temp -> next;
    temp -> next = nodetoinsert;

}


//print linked list
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

  //insert element at the tail
  insertatTail(tail , 10);
  insertatTail(tail , 12);
  insertatTail(tail , 16);

  print(head);
  cout<<endl<<endl;
  
  //insert at position
  cout<<"Insert at position"<<endl<<endl;
  
  int pos,details; // cin from user

  cout<<"which position : ";
  cin>>pos;
  cout<<"data : ";
  cin>>details;
  cout<<endl;

  insertatPosition(tail,head,pos,details);
  print(head);

  



}
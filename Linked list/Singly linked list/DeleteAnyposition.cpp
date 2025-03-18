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

  //destructor
  ~node(){
        cout<<endl<<"~ memory free"<<" "<<this->data<<endl;
  }

};

  void print(node* &head){
    node* temp = head;

      while(temp != NULL){
         cout<<temp->data <<"  "<<temp->next<<endl;
         temp = temp->next;
      }
  }

  void deleteAnyposition (int position , node* &head){

    node* temp = head;

   //deleting first node

   if(position == 1){

        head = head->next;
        delete temp;
        return;

   }

   //delete middle or last node  

   else{
    
        node* current = head;
        node* previous = NULL;
        int cnt = 1;

        while(cnt <= position-1 && current != NULL){
        
          previous = current;
          current = current->next;
          cnt++;
        }
        
        if(current == NULL){ 
          cout<<endl<<"~ Does not exist in linked list "<<position<<endl<<endl;
          return;
        }

          previous->next = current->next;

          delete current;
   }


  }


int main(){

//node 1    
    node* n1 = new node(10);
    node* head = n1; // head point to first node

    n1->next = NULL;
    
//node 2    
    node* n2 = new node(20);
    n2->next = NULL;
    n1 -> next = n2;
    
//node 3    
    node* n3 = new node(30);
    n3->next = NULL;
    n2 -> next = n3;

//node 4    
    node* n4 = new node(40);
    n4->next = NULL;
    n3 -> next = n4; 

    cout << endl<<"Before deleting :-" << endl<<endl;
    print(head); 

    int pos;
    cout<<endl<<"Enter position to delete : ";
    cin>>pos;
    
    deleteAnyposition(pos , head);

    cout << endl<<"After deleting node :-" << endl<<endl;
    print(head);



    
    




}
#include <iostream>
using namespace std;

class node{
public:
  int data;
  node* prev;
  node* next;

  //constructor
  node(int data){
    this->data = data;
    this->next = NULL;
    this->prev = NULL;
  }

  //destructor
  ~node(){
    cout<<endl<<"Free memory "<<this->data<<endl;
  }

};



class doublyLL{

private:
  node* head; //to use globally 
   
public:


//constructor
doublyLL(){
    head = NULL;
}

//destructor
~doublyLL(){
  node* temp = head;
  
  while(temp != NULL){
    node* nextNode = temp->next;
    delete temp;
    temp = nextNode;
  }

  head = NULL;

}



void create(int t){

    int firstNode , newdata;
    cout<<endl<<"Enter First NODE data : ";
    cin>>firstNode;

    head = new node(firstNode);
    node* temp = head;

    for(int i = 2; i <= t; i++){
        
      cout<<"Enter data of next NODE : ";
      cin>>newdata;  
      node* newNode = new node(newdata);
      temp->next = newNode;
      newNode->prev = temp;
      temp = newNode; 

    }
}

void display(){
    node* temp = head;

    while(temp != NULL){
        cout<<endl<<temp->data<<"     "<<temp->next<<"     "<<temp->prev<<endl;
        temp = temp->next;
    }
}

void updateNode(){

  cout<<endl<<endl<<"Before update : "<<endl;
  display();

  int update , count = 1, dataNode;
  cout<<endl<<"Which position you want to update ? : ";
  cin>>update;
  
  node* temp = head;

  //to get desired position
  while(temp != NULL && count < update){
 
    temp = temp->next;
    count++;
  }


  if(temp != NULL){
    cout<<"Enter Data : ";
    cin>>dataNode;

    temp->data = dataNode;
  }
  else{
    cout<<endl<<"----------------- INVALID -----------------"<<endl;
  }

  cout<<endl<<"After update : "<<endl;
  display();
}


void deleteNode(){
  
  display();

  if (head == NULL) {
    cout << "List is empty!" << endl;
    return;
}

  node* current = head;

  int position;

  cout<<endl<<"Which position you want to delete ? : ";
  cin>>position;

//delete from starting  
  if(position == 1){
     head = head-> next;

     if(head){
      head->prev = NULL; //updating prev pointer to new
     }

     delete current;
     return;
  }

//delete from middle or last  
  else{
    int cnt = 1;
    
    while(cnt < position && current != NULL){
      current = current->next;
      
      cnt++;
    }

    if(current == NULL){
      cout<<endl<<"Does not exist in Linked list"<<endl;
      return;
    }

    //adjust previous node next
    if(current->prev){
      current->prev->next = current->next;
    }

    //adjust next node previous
    if(current->next){
      current->next->prev = current->prev;
    }

    delete current;
    return;

  }
}

};

int main(){
  doublyLL list;
  int user = -1 , total;

  while(user != 0){
    cout<<endl<<"-------------------------- C R U D --------------------------"<<endl<<endl;    
    cout<<"PRESS 1 : Create Linked List"<<endl;    
    cout<<"PRESS 2 : Read Linked List"<<endl;
    cout<<"PRESS 3 : Update Linked List"<<endl;
    cout<<"PRESS 4 : Delete Linked List ( node )"<<endl;
    cout<<"PRESS 0 : Exit Program"<<endl<<endl;
    
    cout<<"Enter : ";
    cin>>user;

    switch(user){
       case 1:
         cout<<endl<<"- - - - - CREATE - - - - -"<<endl;
         cout<<endl<<"How many NODE you want to create ? : ";
         cin>>total;
         list.create(total);
       break;

       case 2:
         cout<<endl<<"- - - - - READ - - - - -"<<endl;
         list.display();
       break;

       case 3:
        cout<<endl<<"- - - - - UPDATE - - - - -"<<endl;
         list.updateNode();
       break;

       case 4:
         cout<<endl<<"- - - - - DELETE - - - - -"<<endl;            
         list.deleteNode();
       break;

       case 0:
         cout<<"---------------------- EXIT ----------------------"<<endl;
         exit(0);
       break;
     
     default:
       cout<<endl<<"----------- invalid ! -----------"<<endl;
     break;   
    }
  }
}
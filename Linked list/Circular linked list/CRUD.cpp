#include <iostream>
using namespace std;

class node{
public:

  
  int data;
  node* next;

  //constructor
  node(int data){
     this->data = data;
     this->next = NULL;
  }

  //destructor
  ~node(){
    cout<<endl<<"Memory free : "<<this->data<<endl;
  }

};

class singlyLinked{
public:

//constructor
singlyLinked() {
  head = NULL;
}

//destructor
~singlyLinked(){
  if (head == NULL) return;
    
  node* temp = head;
  node* nextNode;

  do {
      nextNode = temp->next;
      delete temp;
      temp = nextNode;
  } while(temp != head);

  head = NULL;
}

node* head; //global to access in other function

  void insertatEnd(int t){
     
          //edge case
          if(t <= 0){
            cout<<endl<<"Number of nodes must be greater than 0"<<endl;
          }
          
          int value;
          cout<<endl<<"Value in first node = ";
          cin>>value;

          head = new node(value);

          node* temp = head;

          for(int i = 2; i <= t; i++){

              int val;
              cout<<"Enter node data = ";
              cin>>val;

              node* newnode = new node(val);
              
              temp->next = newnode;
              temp = newnode;
    
          }

          temp->next = head; // make circular
  }

  void display(){

          node* temp = head;
          cout<<endl;

          do{
            cout<<temp->data<<" -> " ;
            temp = temp->next;
          }
          while(temp != head);

  }

  void update(){

    if(head == NULL){
       cout << endl << "-------------- Empty Linked list --------------" << endl;
       return;
     }
  
     
     display(); //before update

     int pos;
     
     cout<<endl<<"Which position you want to UPDATE ? : ";
     cin>>pos;

     node* temp = head;

     int cnt = 1 , askdata;
     
     //to get desired position
     while(temp->next != head && cnt < pos){

        temp = temp->next;
        cnt++;
     }

     //if temp is not NULL 
     if(temp->next != head){

        cout<<"Enter desired data to update = ";
        cin>>askdata;
        temp->data = askdata;
     }
     else{
      cout<<endl<<"------- Invalid position ! -------"<<endl;
     }
     
     display(); //after update
     
  }

  void deleteNode (){


    display(); //before delete

    int position , count = 1;
     
    cout<<endl<<"Which position you want to DELETE ? : ";
    cin>>position;

        //edge case
        if(head == NULL){
          cout<<endl<<"-------------- Empty Linked list --------------"<<endl;
          return;
        }
    

    node* temp = head;
    node* current = head;
    node* previous = NULL;



//delete from starting
    if(position == 1){
      node* last = head;

      //find last node
      while(last->next != head){
        last = last->next;
      }

      //if only one node in list
      if(head->next == head){
        delete head;
        head = NULL;
      }
      else{
        head = head->next;
        last->next = head;
        delete current;
      }

      return;
      
    }

//delete from middle and last
    else{

      while(count < position && current->next != head){
        previous = current;
        current = current->next;
        count++;
      }

      if(count == position && current != head){
        previous->next = current->next;
        delete current;
      }
      else {
        cout << "Invalid position!" << endl;
    }

    }

      
    
  }

};

int main() {
    
    singlyLinked list;
    int user = -1, total ;

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

                  cout<<endl<<"Enter total NODES you want to create = ";
                  cin>>total;

                  list.insertatEnd(total);
                  
                break;

                case 2:
                  cout<<endl<<"- - - - - READ - - - - -"<<endl;
                  list.display();

                break;

                case 3:
                 cout<<endl<<"- - - - - UPDATE - - - - -"<<endl;
                 list.update();
                
                break;

                case 4:
                 cout<<endl<<"- - - - - DELETE - - - - -"<<endl;
                 list.deleteNode();
                
                break;

                case 0:
                 cout<<endl<<"- - - - - ( EXIT ) - - - - -"<<endl<<endl;
                 exit(0);
                break;


            default:
            cout<<endl<<"----------- invalid ! -----------"<<endl;
            break;
        }

    }
    
}
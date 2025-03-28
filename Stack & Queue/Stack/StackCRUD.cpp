//stack implement using array

#include <iostream>
using namespace std;

class stack {
public:
  int *arr;
  int size;
  int top;

  //constructor
  stack(int size){
    this->size = size;
    arr = new int[size];
    top = -1;
  }


  void push(){
    cout<<endl;
    if(size <= 0){
      cout<<endl<<"stack is empty"<<endl;
    }
    else{
        top++;
        int element;
    
        while(top < size){
          
          cout<<"Enter element in s("<<top<<") : ";
          cin>>element;
    
          arr[top] = element;

         top++;
        }
        top--;
    }

    
  }

  void viewtop(){
    cout<<endl<<"Top :- "<<arr[top]<<endl<<endl;


    cout<<"( All element )"<<endl;
    for(int i = 0; i <= top; i++){

        cout<<arr[i]<<endl;
    }
    
  }

  void update(){

    cout<<endl<<"---- before update ----"<<endl;
    viewtop();

    int pos , upd , ct;
    cout<<"Which position you want to update ? : ";
    cin>>pos;

    for(int ct = 0; ct <= pos; ct++){

      if(ct == pos){
        cout<<"update element in s("<<pos<<") : ";
        cin>>upd;
        arr[pos] = upd;
      }
      
    }

    cout<<endl<<"---- after update ----"<<endl;
    viewtop();

  }

  void pop(){

    if(top == -1){
       cout<<"---- Stack is empty ----"<<endl;
    }
    else{
      cout<<endl<<"---- Deleted top element ----"<<endl;
      top--;
    }
   
   
  }


};

int main(){
    
    int totalSize;
    cout<<"Enter Size of Array(stack) : ";
    cin>>totalSize;

    stack s(totalSize);

    int user = -1;

    while(user != 0){

        cout<<endl<<"-------------------------- C R U D --------------------------"<<endl<<endl;    
        cout<<"PRESS 1 : Create (push)"<<endl;    
        cout<<"PRESS 2 : Read & (peek)"<<endl;
        cout<<"PRESS 3 : Update stack"<<endl;
        cout<<"PRESS 4 : Delete (pop)"<<endl;
        cout<<"PRESS 0 : Exit Program"<<endl<<endl;

        cout<<"Enter : ";
        cin>>user;

        switch(user){

            case 1:
            s.push();
            break;

            case 2:
            s.viewtop();
            break;

            case 3:
            s.update();
            break;

            case 4:
            s.pop();
            break;

            case 0:
             cout<<endl<<"------------- exit -------------"<<endl;
             exit(0);
            break;

            default:
              cout<<"----- Invalid -----"<<endl;
            break;
        }

    }


}
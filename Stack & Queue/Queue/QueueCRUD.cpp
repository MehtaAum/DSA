//queue implement using array

#include <iostream>
using namespace std;

class queue{
public:
   int *arr , size , front , rear;

   //constructor
   queue(int size){
      this->size = size;
      arr = new int[size];
      front = 0;
      rear = 0;
   }

   void enqueue(){
    cout<<endl;

    int element;

    for(;rear < size; rear++){
        cout<<"Enter element q("<<rear<<") : ";
        cin>>element;

        arr[rear] = element;
    }
    
   }

   void read(){
    if(front >= rear){
        cout<<endl<<"------ Queue is EMPTY ------"<<endl;
        return;
     }

    cout<<endl<<"Front : "<<arr[front]<<endl;
    cout<<"rear : "<<arr[rear-1]<<endl<<endl;

    for(int i = front; i < rear; i++){
        cout<<arr[i]<<endl;
    }
   }

   void update(){

     int pos;
     cout<<endl<<"Enter position you want to update : ";
     cin>>pos;

     if(pos >= rear || pos < front ){
        cout<<"------ invalid position ! ------";
        return;
     }

     for(int i = 0; i <= pos; i++){

        if(i == pos){
            cout<<"Enter desired element : ";
            cin>>arr[i];
        }
        
     }
   }

   void dequeue(){
    if(front == rear){
       cout<<endl<<"------ Queue is EMPTY ------"<<endl;
       cout<<endl<<"------ Exit ------"<<endl;

       //reset front and rear
       front = 0;
       rear = 0;
       return;
    }
    cout<<endl<<"Deque : "<<arr[front]<<endl;
    front++;
   }


};

int main() {

    int totalSize , user = -1;
    cout<<"size of QUEUE : ";
    cin>>totalSize;

    queue q(totalSize);

    while(user != 0){
        cout<<endl<<"-------------------------- C R U D --------------------------"<<endl<<endl;    
        cout<<"PRESS 1 : Create (push)"<<endl;    
        cout<<"PRESS 2 : Read "<<endl;
        cout<<"PRESS 3 : Update (queue)"<<endl;
        cout<<"PRESS 4 : Delete"<<endl;
        cout<<"PRESS 0 : Exit Program"<<endl<<endl;

        cout<<"Enter : ";
        cin>>user;

        switch(user){
            case 1:
            q.enqueue();
            break;

            case 2:
            q.read();
            break;

            case 3:
            q.update();
            break;

            case 4:
            q.dequeue();
            break;

            case 0:
            cout<<endl<<"---------- exit ----------"<<endl;
            exit(0);
            break;


            default:
              cout<<endl<<"---- INVALID ----"<<endl;
            break;
        }
    }


}
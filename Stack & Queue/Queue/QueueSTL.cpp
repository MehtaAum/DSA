//queue is fifo : first in first out

#include <iostream>
#include <queue>

using namespace std;

int main(){

    queue <int> q;

    q.push(20);
    cout<<"front : "<<q.front()<<endl;
    q.push(30);
    cout<<"front : "<<q.front()<<endl;
    q.push(40);
    cout<<"front : "<<q.front()<<endl;
    q.push(50);

    cout<<"Queue size : "<<q.size()<<endl;

    q.pop();
    q.pop();

    cout<<"Queue size after pop : "<<q.size()<<endl;

    if(q.empty()){
        cout<<endl<<"Queue is empty"<<endl;
    }
    else{
        cout<<endl<<"Queue is not empty"<<endl;
    }

}
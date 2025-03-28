//stack is LIFO : last in first out

#include <iostream>
#include <stack>

using namespace std;

int main(){

    stack<int> s;

    //insert element
    s.push(10);
    s.push(20);
    s.push(30);

    cout<<"size of stack : "<< s.size()<<endl;

    while(!s.empty()){

        cout<<s.top()<<endl; 
        s.pop(); // delete element at top
    }

    cout<<"size of stack after delete all element : "<< s.size()<<endl;




}
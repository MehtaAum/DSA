#include <iostream>
using namespace std;


bool search(int a[] ,int size , int key){

    for (int i = 0; i < size; i++)
    {
        if(a[i] == key){
            return 1;
        }
    }
    return 0;
}

int main() {

    int arr[10] = {9,8,7,6,5,4,2,-3,1,0} , key;
    
    cout<<"Enter Key = ";
    cin>>key;

    bool found = search(arr,10,key);

    if(found == 1){
        cout<<"Key is present"<<endl;
    }
    else if(found == 0){
        cout<<"Key is absent    "<<endl;
    }
}
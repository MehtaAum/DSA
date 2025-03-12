//write a c++ program that returns the elements in a vector that are strictly smaller than their adjacent left and right neighbours.

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int size;
    cout<<"size = ";
    cin>>size;

    if(size < 3){
      cout<<"no element satisfy the condition"<<endl;
      return 0;
    }

    vector<int> v(size);

    cout<<endl<<"( input )"<<endl<<endl;
    for(int i = 0; i < size; i++){
        cout<<"v["<<i<<"] = ";
        cin>>v[i];
    }

    bool check = true;

    cout<<endl<<"( output )"<<endl<<endl;
    for(int i = 1; i < size-1; i++){

        if(v[i] < v[i-1] && v[i] < v[i+1]){
          cout<<v[i]<<" ";
          check = false;
        }

    }

    if(check){
        cout<<"( No elements found )"<<endl;

    }


}
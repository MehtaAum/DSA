//write a C++ program to create an nxn matrix by taking an integer (n) as input from the user

#include <iostream>
#include <vector>
using namespace std;

int main() {

  int size;
  cout<<"size = ";
  cin>>size;

  vector<vector<int>> v(size,vector<int>(size));

  cout<<endl<<"( input )"<<endl<<endl;
  for(int i = 0; i < size; i++){

    for(int j = 0; j < size; j++){
        cout<<"v["<<i<<"]["<<j<<"] = ";
        cin>>v[i][j];
    }

  }

  cout<<endl<<"( Output )"<<endl<<endl;
  for(int i = 0; i < size; i++){

    for(int j = 0; j < size; j++){
        cout<<v[i][j]<<" ";
    }
    cout<<endl;

  }

}
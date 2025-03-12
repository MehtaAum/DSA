//write a c++ program to reverse the given vector

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    int size;
    cout<<"size of vector = ";
    cin>>size;

    vector<int> v(size);
    vector<int> rev;

    cout<<endl<<"( input )"<<endl<<endl;

    for(int i = 0; i < size; i++){
        cout<<"v["<<i<<"] = ";
        cin>>v[i];
    }

    cout<<endl<<"( output )"<<endl<<endl;

   
    int d = size;

    for(int i = 0; i < size; i++){
     d--;
     rev.push_back(v[d]);
     cout<<rev[i]<<" ";

    //you can use reverse() function also
    // reverse(v.begin() , v.end());
    // cout<<v[i]<<" ";

    //you can also use swap() function and when use swap do like size/2 to loop
    // swap(v[i] , v[size- i -1]);
    }
    

    //use this when using swap only to cout

    // for(int i = 0; i < size; i++){
    //     cout<<v[i];
    // }

 

 
}
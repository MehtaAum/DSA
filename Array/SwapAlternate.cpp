//question from : (code help yt channel)

//swap alternate
//example : {1,2,3,4,5} swap {2,1,4,3,5}

#include <iostream>
using namespace std;

int main() {

    int size = 0;
    cout<<"size = ";
    cin>>size;
  
    int arr[size];
//cin  
    for (int i = 0; i < size; i++)
    {
      cout<<"arr["<<i<<"] = ";
      cin>>arr[i];
    }
//original     
    cout<<endl<<"Original array : ";
  
    for (int i = 0; i < size; i++)
    {
      cout<<arr[i]<<" ";
    
    }
//swap
    cout<<endl<<"Swap array : ";

    for (int i = 0; i < size; i++)
    {
      if(i%2 == 1){
          cout<<arr[i]<<" "<<arr[i-1]<<" ";
      }
      else if(i == size-1){
         cout<<arr[i]<<" ";
      }
      
    
    }
  
}
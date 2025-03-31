// Bubble sort: means it compares adjacent elements and swaps them.  
// Example: 1, 10, 14, 100, 0, 1  
// It compares 1 & 10, 10 & 14, 14 & 100, and so on.  
// And the largest element moves to the correct position.

#include <iostream>
using namespace std;

int main(){

    int size;

    cout<<"Enter size of array : ";
    cin>>size;

    int arr[size] , temp;
    
    cout<<endl<<"Before sort : "<<endl<<endl;

    for(int i = 0; i < size; i++){
      cout<<"arr["<<i<<"] : ";  
      cin>>arr[i];
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i-1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }

    cout<<endl<<"After sort : "<<endl<<endl;

    for(int l = 0; l < size; l++){
       cout<<arr[l]<<"  ";
    }
    
}




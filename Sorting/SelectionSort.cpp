// Selection Sort: Find the minimum element and place it at the correct position

#include <iostream>
using namespace std;

int main (){
    int size;
    cout<<"enter array size : ";
    cin>>size;
    cout<<endl;

    int a[size] , temp;
    
    for (int k = 0; k < size; k++)
    {
        cout<<"Enter element a["<<k<<"] : ";
        cin>>a[k];
    }
    cout<<endl;
    
    for (int i = 0; i < size-1; i++)
    {
        int min = i;

        for (int j = i+1; j < size; j++)
        {
            if(a[j] < a[min]){
                min = j;
            }
        }

        if(min != i){
            temp = a[min];
            a[min] = a[i];
            a[i] = temp;
        }   

        
        
    }


    //output
    for (int c = 0; c < size; c++)
    {
        cout<<a[c]<<"  ";
    }
    


    
}
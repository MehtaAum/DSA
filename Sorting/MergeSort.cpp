// Merge Sort:
// 1. Find the middle of the array.
// 2. Recursively divide the array into left and right halves until single elements remain.
// 3. Merge the divided arrays back together in sorted order.

#include <iostream>
using namespace std;

class sorting{

public:

    int si;

    //constructor
    sorting(int size){
       si = size;
    }

    void mergesort (int a[] ,int l ,int r){
        if(l<r){
            int mid = (l+r) / 2;
            mergesort(a, l, mid);  //sort left subarray
            mergesort(a, mid+1, r); //sort right subarray
            merge(a, l, mid, r); //merge array
        }
    }
    
    void merge(int a[] ,int l ,int mid , int r){

        int b[si]; //temp array

        int i = l , j = mid+1 , k = l;
        
        while(i <= mid && j <= r){

            if(a[i] < a[j]){

                b[k] = a[i];
                i++;
            }
            else{
                b[k] = a[j];
                j++;
            }
            k++;
        }

        
        if(i > mid){ //if left subarray check all 
            while(j <= r){
              b[k] = a[j];
              k++;
              j++;
            }
        }
        else{  //if right subarray check all
            while(i <= mid){
                b[k] = a[i];
                k++;
                i++;
              }
        }

        for (int p = l; p <= r; p++)  //update only current sorted subarray
        {
            a[p] = b[p];
        } 

        
    }

};



int main(){


    int size , left , right;

    cout<<"Enter array size : ";
    cin>>size;
    cout<<endl;

    int a[size];

    for (int d = 0; d < size; d++)
    {
        cout<<"Enter element a["<<d<<"] : ";
        cin>>a[d];
    }
    cout<<endl;

    left = 0;
    right = size-1;

    sorting obj1(size);

    obj1.mergesort(a,left,right );

    cout<<endl<<"Output : "<<endl<<endl;

    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<"  ";
    }
    
    
}
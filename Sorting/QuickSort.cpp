#include <iostream>
using namespace std;

class QuickSort {
public:

    int partition(int a[] ,int l , int r){

        int pivot = a[l] , i = l , j = r;

        while(i < j){

            while(a[i] <= pivot) i++;

            while(a[j] > pivot) j--;

            if(i < j){
                swap(a[i],a[j]);
            }
            
        }

        swap(a[l],a[j]);

        return j;
    }

    void quick (int a[] , int l, int r){

        if(l < r){
            int pivot = partition(a,l,r);
            
            quick(a,l,pivot-1);
            quick(a,pivot+1,r);
        }

    }
};

int main(){

    int size;
    cout<<"Enter array size : ";
    cin>>size;
    cout<<endl;

    int a[size];

    for (int c = 0; c < size; c++)
    {
        cout<<"Enter element a["<<c<<"] : ";
        cin>>a[c];
    }

    int l = 0 , r = size-1;
 
    QuickSort obj1;

    obj1.quick(a,l,r);

    cout<<endl<<"Output : "<<endl<<endl;
    for(int i = 0; i < size; i++)
    {
        cout<<a[i]<<"  ";
    }
    
     
    
}
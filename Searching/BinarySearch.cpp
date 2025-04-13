// binary search to work correctly array must be ascending or descending order 

// Why is monotonicity required?
// Binary search works by repeatedly dividing the search interval in half. If the data isn’t sorted, you can’t confidently decide whether to go left or right after comparing the middle element — which defeats the purpose of the algorithm. 

// time complexity : 0(log n) 
// space complexity (including input) : 0(n)

#include <iostream>
using namespace std;

bool Ascending = true;
bool Descending = true;

void checkArray(int a[] , int size){

    for (int i = 0; i < size-1; i++)
    {
        if(a[i] < a[i+1]){
            Descending = false;
        }
        else if(a[i] > a[i+1]){
            Ascending = false;
        }
    }

    if(Ascending){
      cout<<endl<<"( Array is Ascending )"<<endl;
    }
    else if(Descending){
      cout<<endl<<"( Array is Descending )"<<endl;
    }
    else{
        cout<<endl<<"----- Array must be monotonic! -----"<<endl;
        exit(0);
    }

};

int binarysearch (int a[] , int size , int key){

    int left = 0 , right = size-1;
    int mid = (left+right)/2;

    while(left <= right){

        if(a[mid] == key){
          return mid;
        }

        if(Ascending){
            if(key > a[mid]){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }
        }
        else{
            if(key < a[mid]){
                left = mid + 1;
            }
            else{
                right = mid-1;
            }   
        }
        

        mid = (left + right)/2;
    }

    return -1;

}

int main(){

    int size , countA = 0 , countB = 0 , key;
    cout<<"Enter size of array : ";
    cin>>size;

    int a[size];

    for (int i = 0; i < size; i++)
    {
        cout<<"Enter a["<<i<<"] = ";
        cin>>a[i];
    }

    checkArray(a , size);

    cout<<endl<<"( Array )"<<endl<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<endl<<"Enter key = ";
    cin>>key;

    int index =  binarysearch(a , size , key);
    cout<<endl<<"Index of "<<key<<" is = "<<index<<endl;

}
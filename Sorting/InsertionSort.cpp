// Insertion Sort is a sorting algorithm that inserts each element into its correct position by shifting larger elements to the right.

//( small example )

// Unsorted Array: [4, 1, 5, 2, 3]
// Step-by-Step Sorting:
// [4] | 1, 5, 2, 3 → Insert 1 → [1, 4] | 5, 2, 3

// [1, 4] | 5, 2, 3 → Insert 5 → [1, 4, 5] | 2, 3

// [1, 4, 5] | 2, 3 → Insert 2 → [1, 2, 4, 5] | 3

// [1, 2, 4, 5] | 3 → Insert 3 → [1, 2, 3, 4, 5]

// Sorted Array: [1, 2, 3, 4, 5]

#include <iostream>
using namespace std;

int main(){

    int size;
    cout<<"Enter array size : ";
    cin>>size;

    int a[size] , temp;
    
    for (int n = 0; n < size; n++)
    {
        cout<<"a["<<n<<"] : ";
        cin>>a[n];
    }
    cout<<endl<<"-------- Output --------"<<endl<<endl;
    

    for (int i = 1; i < size; i++)
    {
        temp = a[i];
        int j = i-1;

        while(j >= 0 && a[j] > temp){

            a[j+1] = a[j];
            j--; 
        }
        a[j+1] = temp;
    }

    for(int c = 0; c < size; c++){

        cout<<a[c]<<"  ";
    }
    
    
}
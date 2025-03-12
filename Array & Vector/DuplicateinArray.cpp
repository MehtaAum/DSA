//Duplicate In Array

//question from :- (coding ninja)
//Problem statement :-

//ou are given an array ‘ARR’ of size ‘N’ containing each number between 1 and ‘N’ - 1 at least once. There is a single integer value that is present in the array twice. Your task is to find the duplicate integer value present in the array.
// For example:
// Consider ARR = [1, 2, 3, 4, 4], the duplicate integer value present in the array is 4. Hence, the answer is 4 in this case.

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr = {5,9,2,3,8,8};



    sort(arr.begin(), arr.end());
    int size = arr.size();
   
    for(int i = 1; i < size; i++ ) {
   
       if(arr[i] == arr[i-1]){
           return arr[i];
       }
   
    }
}
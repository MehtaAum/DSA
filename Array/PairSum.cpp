//Pair Sum

//question from :- (coding ninja)

// Problem statement
// You are given an integer array 'ARR' of size 'N' and an integer 'S'. Your task is to return the list of all pairs of elements such that each sum of elements of each pair equals 'S'.

// Note:

// Each pair should be sorted i.e the first value should be less than or equals to the second value. 

// Return the list of pairs sorted in non-decreasing order of their first value. In case if two pairs have the same first value, the pair with a smaller second value should come first.

// sample Input 1:
// 5 5
// 1 2 3 4 5

// Sample Output 1:
// 1 4
// 2 3
// Explaination For Sample Output 1:
// Here, 1 + 4 = 5
//       2 + 3 = 5
// Hence the output will be, (1,4) , (2,3).

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> arr = {5,6,5,4,6,3,7,1,2};

    vector<vector<int>> ans;
    int s = 10;

    int size = arr.size();
 
    for(int i = 0; i < size; i++) {
        
        for(int j = i+1; j < size; j++) {
                 if(s == arr[i] + arr[j]){
                       
                    vector<int> temp;
 
                   temp.push_back(min(arr[i], arr[j]));  
                   temp.push_back(max(arr[i], arr[j])); 
                   ans.push_back(temp);
                 }
         } 
    }
 
    sort(ans.begin() , ans.end());
    

    for (int i = 0; i < ans.size(); i++)
    {
         for (int j = 0; j < ans.size(); j++)
        {
        cout<<ans[i][j]<<" ";
        }
        cout<<endl;
        
    }
   
}
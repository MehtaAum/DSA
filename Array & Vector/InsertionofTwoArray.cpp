// Intersection Of Two Sorted Arrays

//question from :- (coding ninja)

// Problem statement
// You are given two arrays 'A' and 'B' of size 'N' and 'M' respectively. Both these arrays are sorted in non-decreasing order. You have to find the intersection of these two arrays.

// Intersection of two arrays is an array that consists of all the common elements occurring in both arrays.

// Note :
// 1. The length of each array is greater than zero.
// 2. Both the arrays are sorted in non-decreasing order.
// 3. The output should be in the order of elements that occur in the original arrays.
// 4. If there is no intersection present then return an empty array.
// Detailed explanation ( Input/output format, Notes, Images )
// Constraints :
// 1 <= T <= 100
// 1 <= N, M <= 10^4
// 0 <= A[i] <= 10^5
// 0 <= B[i] <= 10^5

// Time Limit: 1 sec

// Sample Input 1 :
// 2
// 6 4
// 1 2 2 2 3 4
// 2 2 3 3
// 3 2
// 1 2 3
// 3 4  

// Sample Output 1 :
// 2 2 3
// 3   

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr1 = {1,2,3};
    vector<int> arr2 = {2,3};

    int n = arr1.size();
    int m = arr2.size();

    vector<int> ans;  
    
    int i = 0 , j = 0;

    while(i < n && j < m){

        if(arr1[i] < arr2[j] ){
             i++;
        }
        else if(arr1[i] > arr2[j]){
             j++;
        }
        else{
            ans.push_back(arr1[i]);
            i++;
            j++;
        }

    }
    
    for(int a = 0; a < ans.size(); a++){
       cout<<ans[a]<<" ";
    }
}
//question from : (leetcode)
//1207. Unique Number of Occurrences
// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// Example 1:

// Input: arr = [1,2,2,1,1,3]
// Output: true
// Explanation: The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

// Example 2:

// Input: arr = [1,2]
// Output: false

#include <bits/stdc++.h>
using namespace std;


class Solution {
    public:
        bool uniqueOccurrences(vector<int>& arr) {
            //1,2,2,1,1,3
            int size = arr.size();
    
            sort(arr.begin(),arr.end()); //sort array to bring same element together ex: 1,1,1,2,2,3
            vector<int> counts; //to store counts 
            int count = 1;  
    
            for(int i = 1; i < size; i++){
                if(arr[i] == arr[i-1]){
                  count++; //increment count for same element 
                }
                else{
                    counts.push_back(count); //store previous count
                    count = 1; //reset count for new element
                }
            }
             counts.push_back(count); //store last element count
    
             sort(counts.begin(),counts.end()); //sort counts array
    
             for(int i = 1; i < counts.size(); i++){
                if(counts[i] == counts[i-1]){
                    return false;
                }
             }
    
             return true;
    
    
        }
    };

    int main() {
        Solution solution;
        vector<int> arr = {1,2,2,1,1,3};
        
        bool result = solution.uniqueOccurrences(arr); // Store the result
        cout << boolalpha << result << endl; // Print the stored result true/false instead of 1 or 0 thats why i use boolalpha
    
        return 0;
    }
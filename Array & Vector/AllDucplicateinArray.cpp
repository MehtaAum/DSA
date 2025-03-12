//442. Find All Duplicates in an Array

//question from :- (leetcode)

// Given an integer array nums of length n where all the integers of nums are in the range [1, n] and each integer appears at most twice, return an array of all the integers that appears twice.
// You must write an algorithm that runs in O(n) time and uses only constant auxiliary space, excluding the space needed to store the output

// Example 1:

// Input: nums = [4,3,2,7,8,2,3,1]
// Output: [2,3]

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {5,8,8,2,2,6,6,4,7};
    int size = nums.size();

    sort(nums.begin(),nums.end());
    int ans = 0;

    vector<int> count; //store duplicate element

    for(int i = 1; i < size; i++){

     if(nums[i] == nums[i-1]){
        count.push_back(nums[i]);
     }  

    }

    sort(count.begin(),count.end());

    cout<<"Duplicate element : ";
    for(int i = 0; i<count.size(); i++){
       cout<<count[i]<<" ";
    }
}
//sort 0 1 2

//question from :- (coding ninja)

// Problem statement
// You have been given an integer array/list(ARR) of size 'N'. It only contains 0s, 1s and 2s. Write a solution to sort this array/list.

// Note :
// Try to solve the problem in 'Single Scan'. ' Single Scan' refers to iterating over the array/list just once or to put it in other words, you will be visiting each element in the array/list just once. 


#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

    int a[5] = {2,1,0,1,0};

    sort(begin(a), end(a));

    for(int i = 0; i < 5; i++) {

        cout<<a[i]<<" ";

    }

}
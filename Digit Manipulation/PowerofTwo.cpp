//Power of Two

//Given an integer n, return true if it is a power of two. Otherwise, return false.
//An integer n is a power of two, if there exists an integer x such that n == 2^x.

//Example 1:
// Input: n = 1
// Output: true
// Explanation: 20 = 1

#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){
    
    int n = 16;

    double power = 1;

    for(int i = 0; i < 31; i++){
        if(power == n){
             return true;
        }
        power *= 2;
    }

    return false;
   
  

       
}
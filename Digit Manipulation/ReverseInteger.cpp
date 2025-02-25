//reverse integer
//Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-2^31, 2^31 - 1], then return 0.

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 120, rev = 0, digit = 0 ;

    while(x != 0){

        digit = x%10;

        if((rev > INT_MAX/10) || (rev < INT_MIN/10)){ //int_max and min are automatic determined coz they are predefined constants in c++
            return 0;
        }
    
        rev = rev*10 + digit;
        x = x/10;

    }
   return rev;




}

    

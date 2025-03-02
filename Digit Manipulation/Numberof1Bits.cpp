//question from : (leetcode)
//Number of 1 Bits

// Given a positive integer n, write a function that returns the number of 
// set bits
//  in its binary representation (also known as the Hamming weight).

#include <iostream>
using namespace std;

int main() {

    int n = 11;
    int count = 0;

    while(n!=0){

    //checking last bit
    if(n&1) {
      count++;
    } 

    n = n >>1;

    }

    cout<< count<<endl;
}
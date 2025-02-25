// Complement of Base 10 Integer

//The complement of an integer is the integer you get when you flip all the 0's to 1's and all the 1's to 0's in its binary representation.
//For example, The integer 5 is "101" in binary and its complement is "010" which is the integer 2.

#include <iostream>
using namespace std;

int main() {
    
    int n;
    cout<<"enter n : ";
    cin >>n;

    if(n == 0){
        return 1;
    }
    int power = 1 , ans = 0;

    while(n != 0){
        int bit = n&1;
        if(bit == 0){
            ans = ans + (1*power);
        }

        n = n>>1;
        power = power*2;
    }

    return ans;
}


//question from : (coding ninja)
 
//Find Unique element in array 
//example //{2,4,7,2,7}// 4 is unique and all other are repeating so find that unique number

#include <iostream>
using namespace std;

int main() {
    int size = 5;
    int arr[size] = {2,4,7,2,7};
    int ans = 0;

   for(int i = 0; i < size ; i++){
      ans = ans^arr[i];
   }
   cout<< ans<<endl;
}
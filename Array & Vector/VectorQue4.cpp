//check if given array is sorted or not.

#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<int> v;

int element;

for (int i = 0; i < 5; i++)
{
    cin>>element;
    v.push_back(element);
}

cout<<endl;


bool sorted = true;
for (int i = 1; i < v.size(); i++) // i change starting from 0 to starting from 1 coz in if condition 0-1 = -1 to change i am starting from 1
{
    if(v[i] < v[i-1]){
      
        sorted = false;
    }

}
if (sorted == true)
{
    cout<<"array is sorted"<<endl;
}
else{
    cout<<"array is not sorted"<<endl;
}


    
}
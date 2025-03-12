//count the number of elements strictly greater than value x.

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
int x , count = 0;
cout<<"x : ";
cin>>x;

for (int i = 0; i < v.size(); i++)
{
    if(v[i] > x){
        count ++;
    }
}

cout<<"Total number that are greater than x : "<<count<<endl;







}
//trying loop & insert and erase element in vector

#include <iostream>
#include <vector>

using namespace std;

int main() {

vector<int> v;

//for loop
int element;

for (int i = 0; i < 5; i++)
{
    cin>>element;
    v.push_back(element);
}

cout<<endl;

for (int i = 0; i < v.size(); i++)
{
    cout<<v[i]<<" ";
}

v.insert(v.begin()+2 , 99);//add element at 2 index

//for each loop
cout<<endl;

for (int e:v)
{
    cout<<e<<" ";
}

v.erase(v.end()-2);

//while loop
cout<<endl;
int index = 0;

while(index < v.size()){
  cout<<v[index]<<" ";
  index++;
}




}
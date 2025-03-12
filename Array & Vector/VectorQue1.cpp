//find the last occurrence of an element x in an given vector

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

int x , occur = -1;

cout<<"x : ";
cin>>x;


for (int i = 0; i < v.size(); i++)
{
  if(v[i] == x){
     occur = i;
  }
}

cout<<"occurance : "<<occur<<endl;




}
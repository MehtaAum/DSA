//inserting Rows One by One

#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<vector<int>> v;

//insert rows into 2d vector
v.push_back({1,2,3});
v.push_back({4,5,6});
v.push_back({7,8,9});

cout<<"size of vector : "<<v.size()<<endl<<endl;

for (int i = 0; i < v.size(); i++)
{
    for (int j = 0; j < v.size(); j++)
    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
    
}


}
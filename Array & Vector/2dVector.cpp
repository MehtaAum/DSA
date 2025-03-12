//declaring and initializing 2d vector

#include <iostream>
#include <vector>
using namespace std;

int main() {

vector<vector<int>> v = {{1,2},{3,4}};

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
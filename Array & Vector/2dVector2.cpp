//cin by user in 2d vector

#include <iostream>
#include <vector>

using namespace std;

int main() {

int rows , col;

cout<<"enter number of rows : ";
cin>>rows;    
cout<<"enter number of column : ";
cin>>col;

vector<vector<int>>  v(rows,vector<int>(col)); //it saying outer vector in rows and inner vector in column

cout<<"size of vector : "<<v.size()<<endl<<endl;

for (int i = 0; i < v.size(); i++)
{
    for (int j = 0; j < v[i].size(); j++)
    {
       cout<<"v["<<i<<"]["<<j<<"] = "; 
       cin>>v[i][j];
    }
}

cout<<endl<<"[ output ]"<<endl<<endl;

for (int i = 0; i < v.size(); i++)
{
    for (int j = 0; j < v[i].size(); j++) //v[i].size() saying how much size for example: 0 rows has how much size 

    {
        cout<<v[i][j]<<" ";
    }
    cout<<endl;
}
}
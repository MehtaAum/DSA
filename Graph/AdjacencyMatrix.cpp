//Adjacency matrix
//undirected unweighted graph

#include <iostream>
#include <vector>
using namespace std;

int main(){
    int node , edges;
    cin>>node>>edges;

    vector<vector<int> >AdjMat(node , vector<int>(node,0));

    int u , v;

    for (int i = 0; i < edges; i++)
    {
        cin>>u>>v;
        AdjMat[u][v] = 1;
        AdjMat[v][u] = 1;
    }

    for (int i = 0; i < node; i++)
    {
        for (int j = 0; j < node; j++)
        {
            cout<<AdjMat[i][j]<<" ";
        }
        cout<<endl;
        
    }
    
    
}
#include <iostream>
using namespace std;
#include <vector>

int main()
{   
    int vertex,edges;
    cin>>vertex>>edges;
    vector<vector<int>> adjMatrix(vertex,vector<int>(vertex,0));

    int u,v;
    for(int i=0;i<edges;i++)
    {
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }

    for(int i=0;i<vertex;i++)
    {
        for(int j=0;j<vertex;j++)
        {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
#include <iostream>
#include "DFS.h"
#include "BFS.h"
#include "hasPath.h"
using namespace std;

int main()
{

int n;
int e;
cout<<"Enter number of vertices: "<<endl;
cin>>n;
cout<<"Enter number of edges: "<<endl;
cin>>e;

int**edges=new int*[n];
for (int i = 0; i < n; i++)
{
    edges[i]=new int[n];
    for (int j = 0; j < n; j++)
    {
        edges[i][j]=0;
    }    
}

for (int i = 0; i < e; i++)
{
    int a,b;
    cout<<"Enter vertices of edge"<<i+1<<endl;
    cin>>a>>b;
    edges[a][b]=1;
    edges[b][a]=1;
}
// cout<<"DFS: ";
// DFS(edges,n);cout<<endl;
// cout<<"BFS: ";
// BFS(edges,n);cout<<endl;

cout<<hasPath(edges,n,0,1)<<endl;






return 0;
}
//Breadth first search

#include<iostream>
#include<queue>
using namespace std;


void printBFS(int**edges, int n, int sv, bool*visited){
   queue<int>q;
   q.push(sv);
   visited[sv]=true;
   while (!q.empty())
   {
    int f=q.front();
    cout<<f<<" ";
    q.pop();
    for (int i = 0; i < n; i++)
    {
        if (edges[f][i]==1&&!visited[i])
        {
            q.push(i);
            visited[i]=true;
        }
    }
   }
}

void BFS(int **edges, int n)
{
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = false;
    }
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            printBFS(edges, n, i, visited);
        }
    }
    delete[]visited;
}
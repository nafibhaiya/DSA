#include<iostream>
using namespace std;

const int MAX_VERTICES = 100;
int adj[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];

void dfs(int vertex, int numVertices)
{
    visited[vertex] = true;
    cout << vertex << " ";
    for(int adjacent=0; adjacent<numVertices; adjacent++)
    {
        if(adj[vertex][adjacent] && !visited[adjacent])
        {
            dfs(adjacent, numVertices);
        }
    }
}

int main()
{
    int numVertices, numEdges, startVertex;
    cout << "Enter the number of vertices: ";
    cin >> numVertices;
    cout << "Enter the number of edges: ";
    cin >> numEdges;
    for(int i=0; i<numEdges; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u][v] = adj[v][u] = 1;
    }
    cout << "Enter the starting vertex: ";
    cin >> startVertex;
    dfs(startVertex, numVertices);
    return 0;
}

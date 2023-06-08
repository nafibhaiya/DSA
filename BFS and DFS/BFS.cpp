#include <iostream>
using namespace std;

const int MAX_VERTICES = 100;
int g[MAX_VERTICES][MAX_VERTICES];
bool visited[MAX_VERTICES];
int q[MAX_VERTICES];
int front_index = 0, rear_index = 0;

void enqueue(int x)
{
    q[rear_index++] = x;
}

int dequeue()
{
    return q[front_index++];
}

bool isQueueEmpty()
{
    return front_index == rear_index;
}

void bfs(int start_vertex, int num_vertices)
{
    visited[start_vertex] = true;
    enqueue(start_vertex);
    while(!isQueueEmpty())
    {
        int current_vertex = dequeue();
        cout << current_vertex << " ";
        for(int neighbor = 0; neighbor < num_vertices; neighbor++)
        {
            if(g[current_vertex][neighbor] && !visited[neighbor])
            {
                visited[neighbor] = true;
                enqueue(neighbor);
            }
        }
    }
    cout << endl;
}

int main()
{
    int num_vertices, num_edges, start_vertex;
    cout << "Enter the number of vertices: ";
    cin >> num_vertices;
    cout << "Enter the number of edges: ";
    cin >> num_edges;
    for(int i = 0; i < num_edges; i++)
    {
        int vertex1, vertex2;
        cin >> vertex1 >> vertex2;
        g[vertex1][vertex2] = g[vertex2][vertex1] = 1;
    }
    cout << "Enter the starting vertex: ";
    cin >> start_vertex;
    bfs(start_vertex, num_vertices);
    return 0;
}

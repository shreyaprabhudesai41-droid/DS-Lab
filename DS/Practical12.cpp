#include <iostream>
#include <queue>
using namespace std;

class Graph
{
    int adj[10][10], visited[10], n;

public:
    // Create Graph
    void createGraph()
    {
        cout << "Enter number of vertices: ";
        cin >> n;

        cout << "Enter adjacency matrix:\n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> adj[i][j];
            }
        }
    }

    // BFS Traversal
    void BFS(int start)
    {
        queue<int> q;

        for (int i = 0; i < n; i++)
            visited[i] = 0;

        visited[start] = 1;
        q.push(start);

        cout << "BFS Traversal: ";

        while (!q.empty())
        {
            int v = q.front();
            q.pop();

            cout << v << " ";

            for (int i = 0; i < n; i++)
            {
                if (adj[v][i] == 1 && visited[i] == 0)
                {
                    visited[i] = 1;
                    q.push(i);
                }
            }
        }
    }

    // DFS Traversal
    void DFS(int v)
    {
        visited[v] = 1;
        cout << v << " ";

        for (int i = 0; i < n; i++)
        {
            if (adj[v][i] == 1 && visited[i] == 0)
            {
                DFS(i);
            }
        }
    }

    void startDFS(int start)
    {
        for (int i = 0; i < n; i++)
            visited[i] = 0;

        cout << "DFS Traversal: ";
        DFS(start);
    }
};

int main()
{
    Graph g;
    int start;

    g.createGraph();

    cout << "Enter starting vertex: ";
    cin >> start;

    g.BFS(start);
    cout << endl;

    g.startDFS(start);

    return 0;
}
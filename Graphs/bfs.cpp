/* Problem:
Perform Breadth First Search (BFS) traversal of a graph
starting from a given source vertex.

Approach:
Use a queue to traverse the graph level by level.
Mark nodes as visited to avoid revisiting. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    int V = 5;   // number of vertices
    vector<int> adj[V];

    // Graph edges
    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {4};

    vector<bool> visited(V, false);
    queue<int> q;

    int start = 0;
    visited[start] = true;
    q.push(start);

    cout << "BFS Traversal: ";

    while(!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for(int neighbour : adj[node]) {
            if(!visited[neighbour]) {
                visited[neighbour] = true;
                q.push(neighbour);
            }
        }
    }
    return 0;
}
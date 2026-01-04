/* Problem:
Perform Depth First Search (DFS) traversal of a graph
starting from a given source vertex.

Approach:
Use recursion to explore a vertex fully before moving
to the next adjacent vertex. */

#include <bits/stdc++.h>
using namespace std;

void dfs(int node, vector<int> adj[], vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for(int neighbour : adj[node]) {
        if(!visited[neighbour]) {
            dfs(neighbour, adj, visited);
        }
    }
}

int main() {
    int V = 5;
    vector<int> adj[V];

    // Graph edges
    adj[0] = {1, 2};
    adj[1] = {3};
    adj[2] = {4};

    vector<bool> visited(V, false);

    cout << "DFS Traversal: ";
    dfs(0, adj, visited);

    return 0;
}
/* Problem:
Find the maximum depth (height) of a binary tree.

Approach:
Recursively calculate the depth of left and right subtrees
and return the maximum of both plus one. */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

int maxDepth(Node* root) {
    if(root == NULL) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << maxDepth(root);
    return 0;
}
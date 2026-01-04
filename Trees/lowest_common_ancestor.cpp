/* Problem:
Find the lowest common ancestor (LCA) of two given nodes
in a binary tree.

Approach:
Recursively search left and right subtrees.
If both sides return non-null, current node is LCA. */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

Node* LCA(Node* root, int p, int q) {
    if(root == NULL || root->val == p || root->val == q)
        return root;

    Node* left = LCA(root->left, p, q);
    Node* right = LCA(root->right, p, q);

    if(left && right) return root;
    return (left != NULL) ? left : right;
}

int main() {
    Node* root = new Node(3);
    root->left = new Node(5);
    root->right = new Node(1);
    root->left->left = new Node(6);
    root->left->right = new Node(2);

    Node* ans = LCA(root, 6, 2);
    cout << ans->val;
    return 0;
}
/* Problem:
Given the root of a binary tree, perform inorder traversal
(left → root → right).

Approach:
Use recursion to first traverse the left subtree,
then visit the root, and finally the right subtree. */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

void inorder(Node* root) {
    if(root == NULL) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}

int main() {
    Node* root = new Node(1);
    root->right = new Node(2);
    root->right->left = new Node(3);

    inorder(root);
    return 0;
}
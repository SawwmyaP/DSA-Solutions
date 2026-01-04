/* Problem:
Check whether a binary tree is symmetric (mirror of itself).

Approach:
Compare left and right subtrees recursively to ensure
they are mirror images. */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* left;
    Node* right;
    Node(int x) : val(x), left(NULL), right(NULL) {}
};

bool isMirror(Node* t1, Node* t2) {
    if(t1 == NULL && t2 == NULL) return true;
    if(t1 == NULL || t2 == NULL) return false;

    return (t1->val == t2->val) &&
           isMirror(t1->left, t2->right) &&
           isMirror(t1->right, t2->left);
}

bool isSymmetric(Node* root) {
    return isMirror(root, root);
}

int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->right->right = new Node(3);

    cout << isSymmetric(root);
    return 0;
}
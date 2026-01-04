/*
Problem:
Reverse a singly linked list.

Approach:
Use three pointers (prev, curr, next) to reverse
the direction of links iteratively. */

#include <bits/stdc++.h>
using namespace std;

struct Node {
    int val;
    Node* next;
    Node(int x) : val(x), next(NULL) {}
};

Node* reverseLinkedList(Node* head) {
    Node* prev = NULL;
    Node* curr = head;

    while (curr != NULL) {
        Node* nextNode = curr->next; // store next
        curr->next = prev;           // reverse link
        prev = curr;                 // move prev
        curr = nextNode;             // move curr
    }
    return prev;
}

int main() {
    // Creating linked list: 1 -> 2 -> 3 -> 4
    Node* head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    head->next->next->next = new Node(4);

    head = reverseLinkedList(head);

    // Printing reversed list
    while (head != NULL) {
        cout << head->val << " ";
        head = head->next;
    }
    return 0;
}
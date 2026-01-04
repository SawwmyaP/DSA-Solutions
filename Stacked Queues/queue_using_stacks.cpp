/* Problem:
Implement a queue using two stacks.

Approach:
Use two stacks:
- s1 for enqueue operation
- s2 for dequeue operation */

#include <bits/stdc++.h>
using namespace std;

stack<int> s1, s2;

void enqueue(int x) {
    s1.push(x);
}

int dequeue() {
    if(s2.empty()) {
        while(!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }
    if(s2.empty()) return -1;

    int val = s2.top();
    s2.pop();
    return val;
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    cout << dequeue() << " ";
    cout << dequeue() << " ";
    cout << dequeue();

    return 0;
}
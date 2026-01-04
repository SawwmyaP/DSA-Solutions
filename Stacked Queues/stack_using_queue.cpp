/* Problem:
Implement a stack using a single queue.

Approach:
On push, rotate the queue so that the newly added element
comes to the front */

#include <bits/stdc++.h>
using namespace std;

queue<int> q;

void push(int x) {
    q.push(x);
    int sz = q.size();
    while(sz-- > 1) {
        q.push(q.front());
        q.pop();
    }
}

int pop() {
    if(q.empty()) return -1;
    int val = q.front();
    q.pop();
    return val;
}

int main() {
    push(1);
    push(2);
    push(3);

    cout << pop() << " ";
    cout << pop() << " ";
    cout << pop();

    return 0;
}
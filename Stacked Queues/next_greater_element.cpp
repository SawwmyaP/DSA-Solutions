#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {4,5,2,25};
    stack<int> st;

    for(int i = nums.size()-1; i >= 0; i--) {
        while(!st.empty() && st.top() <= nums[i])
            st.pop();
        cout << nums[i] << " -> " << (st.empty() ? -1 : st.top()) << endl;
        st.push(nums[i]);
    }
    return 0;
}
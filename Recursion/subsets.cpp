#include <bits/stdc++.h>
using namespace std;

void subsets(vector<int>& nums, int index, vector<int>& curr) {
    if(index == nums.size()) {
        for(int x : curr) cout << x << " ";
        cout << endl;
        return;
    }
    curr.push_back(nums[index]);
    subsets(nums, index+1, curr);
    curr.pop_back();
    subsets(nums, index+1, curr);
}

int main() {
    vector<int> nums = {1,2,3};
    vector<int> curr;
    subsets(nums, 0, curr);
    return 0;
}
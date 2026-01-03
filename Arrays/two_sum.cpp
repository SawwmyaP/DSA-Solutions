/* Problem:
Given an array of integers and a target, find two indices such that their sum equals the target.

Approach:
Use a hash map to store visited elements and check if (target - current) exists. */

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> nums = {2,7,11,15};
    int target = 9;
    unordered_map<int,int> mp;

    for(int i = 0; i < nums.size(); i++) {
        int rem = target - nums[i];
        if(mp.count(rem)) {
            cout << mp[rem] << " " << i;
            break;
        }
        mp[nums[i]] = i;
    }
    return 0;
}
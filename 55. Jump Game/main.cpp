#include <bits/stdc++.h>

using namespace std;

bool canJump(vector<int> &nums) {
    if(nums.size() == 1) // if the vector has only one element then we already at the end of it
        return true;
    if(!nums[0] && nums.size() > 1) // if the first index value is 0 then we can't move anywhere
        return false;

    int steps = nums[0]; // take the first available number of steps
    for (int i = 1; i < nums.size() - 1; ++i) {
        steps--; // take one step
        if(nums[i] > steps) // check if there's a higher number of steps available than we already have
            steps = nums[i];
        if(i + steps >= nums.size() - 1) // check if we can reach the goal
            return true;
        if(!steps) // check if we finished the number of available steps we have, and we can't move anymore
            return false;
    }
    return true;
}

int main() {
    vector<int> nums = {1,2};
    cout << canJump(nums);
}

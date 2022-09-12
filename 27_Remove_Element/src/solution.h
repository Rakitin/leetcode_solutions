#pragma once

#include <vector>

class Solution {
public:
    int removeElement(std::vector<int>& nums, int val) {
        int end = nums.size() - 1;
        for (int i {0}; i < end + 1; ++i) {
            if (nums[i] == val) {
                while (nums[end] == val && end != 0 && i != end) {
                    --end;
                }
                nums[i] = nums[end];
                --end;
            }
        }
        return end + 1;
    }
};

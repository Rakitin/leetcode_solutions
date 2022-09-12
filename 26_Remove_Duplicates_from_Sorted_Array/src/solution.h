#pragma once

#include <vector>

class Solution {
public:
    int removeDuplicates(std::vector<int>& nums) {
        int cur {0};
        for (int i {1}; i < nums.size(); ++i) {
            if (nums[cur] != nums[i]) {
                ++cur;
                nums[cur] = nums[i];
            }
        }
        return cur + 1;
    }
};

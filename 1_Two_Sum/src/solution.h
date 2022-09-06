#pragma once

#include <vector>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        std::vector<int> r;
        for (int i = 0; i < nums.size(); ++i) {
            for (int j = i + 1; j < nums.size(); ++j) {
                if(nums[i] + nums[j] == target) {
                    r.push_back(i);
                    r.push_back(j);
                    return r;
                }
            }
        }
        return r;
    }
};

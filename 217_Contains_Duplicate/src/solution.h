#pragma once

#include <vector>
#include <set>


class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        if (nums.empty()) {
            return false;
        }
        std::set<int> s(nums.begin(), nums.end());
        return s.size() != nums.size();
    }
};

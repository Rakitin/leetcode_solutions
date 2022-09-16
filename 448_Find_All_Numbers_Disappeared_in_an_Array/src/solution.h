#pragma once

#include <vector>
#include <set>

class Solution {
public:
    std::vector<int> findDisappearedNumbers(std::vector<int>& nums) {
        std::set<int> s(nums.begin(), nums.end());
        std::vector<int> result;
        for (int i = 1; i < nums.size() + 1; ++i) {
            if (s.find(i) == s.end()) {
                result.push_back(i);
            }
        }
        return result;
    }
};

#pragma once

#include <iostream>

#include <vector>
#include <algorithm>
#include <numeric>

class Solution {
public:
    int missingNumber(std::vector<int>& nums) {
        int sum = std::accumulate(nums.begin(), nums.end(), 0);
        int m = nums.size();
        return ((0 + m)*(m+1))/2 - sum;
    }
};

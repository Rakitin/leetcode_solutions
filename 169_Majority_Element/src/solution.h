#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
		
		if (nums.size() == 1) {
			return nums[0];
		}
        std::sort(nums.begin(), nums.end());
		return nums[nums.size() / 2];
    }
};

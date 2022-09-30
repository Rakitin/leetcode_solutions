#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
    std::vector<int> findDuplicates(std::vector<int>& nums) {
		std::vector<int> result;
		std::sort(nums.begin(), nums.end());
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i - 1] == nums[i]) {
				result.push_back(nums[i]);
			}
		}
		return result;
    }
};
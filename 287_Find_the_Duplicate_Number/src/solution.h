#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
    int findDuplicate(std::vector<int>& nums) {
		std::sort(nums.begin(), nums.end());
		for (int i = 1; i < nums.size(); ++i) {
			if (nums[i - 1] == nums[i]) {
				return nums[i];
			}
		}
		return 0;
    }
};
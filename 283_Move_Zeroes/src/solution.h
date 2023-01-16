#pragma once

#include <vector>
#include <algorithm>

class Solution {
public:
	void moveZeroes(std::vector<int>& nums) {
		for (int i { 1 }; i < nums.size(); ++i) {
			for (int j {i}; j > 0; --j) {
				if (nums[j] and !nums[j - 1]) {
					std::swap(nums[j], nums[j - 1]);
				}
				else {
					break;
				}
			}
		}
	}
};

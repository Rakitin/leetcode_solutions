#pragma once

#include <vector>

class Solution {
public:
    int pivotIndex(std::vector<int>& nums) {
		int l{0};
		int r{0};
		for (int i = 1; i < nums.size(); ++i) {
			r+=nums[i];
		}
        int result = -1;
		for (int i = 0; i < nums.size(); ++i) {
			if (l == r) {
				return i;
			}
			l += nums[i];
			r -= nums[ i == nums.size() - 1 ? i : i + 1];
		}
		return result;
    }
};
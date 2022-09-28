#pragma once

#include <iostream>

#include <vector>

class Solution {
public:
    std::vector<int> sortedSquares(std::vector<int> &nums) {
        std::vector<int> result(nums.size());
		
		int i = 0;
		int j = nums.size() - 1;
		int t = nums.size() - 1;
		while (i <= j) {
			if (nums[i] * nums[i] > nums[j] * nums[j]) {
				result[t] = nums[i] * nums[i];
				i++;
			}
			else {
				result[t] = nums[j] * nums[j];
				j--;
			}
			t--;
		}
		return result;
    }
};
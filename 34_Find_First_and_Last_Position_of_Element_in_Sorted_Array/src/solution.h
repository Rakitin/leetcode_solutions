#pragma once

#include <vector>

class Solution {
public:
    std::vector<int> searchRange(std::vector<int>& nums, int target) {
        std::vector<int> result { -1, -1 };
		if (!nums.size()) {
			return result;
		}
		
		int mid = biSearch(nums, target, 0, nums.size() - 1);
		if (mid == -1) {
			return result;
		}
		
		int left = mid;
		int right = mid;
		while (left != -1)
		{
			result[0] = left;
			left = biSearch(nums, target, 0, left - 1);
		}

		while (right != -1)
		{
			result[1] = right;
			right = biSearch(nums, target, right + 1, nums.size() - 1);
		}
		
		return result;
    }

private:
	int biSearch(std::vector<int>& nums, int target, int left, int right) {
		while (left <= right) {
			int mid = left + (right - left) / 2;
			if (nums[mid] < target) {
				left = mid + 1;
			}
			else if (nums[mid] > target) {
				right = mid - 1;
			}
			else {
				return mid;
			}
		}
		return -1;
	}

};
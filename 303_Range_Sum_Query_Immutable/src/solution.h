#pragma once

#include <vector>

class NumArray {
public:
	NumArray(std::vector<int>& nums) :
		m_nums {nums}
	{}
	
	int sumRange(int left, int right)
	{
		int result {};
		for (int i = left; i <= right; ++i) {
			result += m_nums[i];
		}
		return result;
	}

private:
	std::vector<int> m_nums;
};

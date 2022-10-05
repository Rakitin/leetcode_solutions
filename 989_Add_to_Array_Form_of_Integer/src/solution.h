#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
	std::vector<int> addToArrayForm(std::vector<int>& num, int k) {
		std::vector<int> result;
		int l = num.size() - 1;
		bool carry = false;
		while (l >= 0 or k or carry) {
			int curNum = 0;
			if (l >= 0) {
				curNum += num[l];
				--l;
			}
			if (k) {
				curNum += k % 10;
				k /= 10;
			}
			if (carry) {
				curNum += 1;
			}
			carry = curNum / 10;
			result.push_back(curNum % 10);
		}
		std::reverse(std::begin(result), std::end(result));
		return result;
	}
};
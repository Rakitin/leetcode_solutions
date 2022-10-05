#pragma once

#include <string>
#include <algorithm>


class Solution {
public:
    std::string addStrings(std::string num1, std::string num2) {
        std::string result;
		int i = num1.length() - 1;
		int j = num2.length() - 1;
		bool carry = false; 
		while (i >= 0 or j >= 0 or carry) {
			int curNum = 0;
			if (i >= 0) {
				curNum += num1[i] - '0';
				--i;
			}
			if (j >= 0) {
				curNum += num2[j] - '0';
				--j;
			}
			if (carry) {
				++curNum;
			}
			carry = curNum / 10;
			result += std::to_string(curNum % 10);
		}
		std::reverse(std::begin(result), std::end(result));
		return result;
    }
};

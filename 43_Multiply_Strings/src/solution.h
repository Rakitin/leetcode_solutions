#pragma once

#include <iostream>
#include <vector>
#include <algorithm>


class Solution {
public:
    std::string multiply(std::string num1, std::string num2) {
		if (num1 == "0" or num2 == "0") {
			return "0";
		}
        
		int len2 = num2.size() - 1;
		std::vector<std::string> tmp;
		int countZero = 0;
		while (len2 >= 0) {
			int len1 = num1.size() - 1;
			int carry = 0;
			std::string s;
			for (size_t i = 0; i < countZero; i++) {
				s += "0";
			}
			while (len1 >= 0 or carry) {
				int curNum = 0;
				if (len1 >= 0) {
					curNum = ctoi(num2[len2]) * ctoi(num1[len1]);
				}
				curNum += carry;
				carry = curNum / 10;
				s += std::to_string(curNum % 10);
				--len1;
			}
			tmp.push_back(s);
			--len2;
			++countZero;
		}
		std::string result = tmp[0];
		for (int i = 1; i < tmp.size(); ++i) {
			result = addStrings(result, tmp[i]);
		}
		std::reverse(std::begin(result), std::end(result));
		return result;
    }

private:
	int ctoi(char c) {
		return c - '0';
	}
	
	std::string addStrings(std::string num1, std::string num2) {
		std::string result;
		int i = 0;
		int j = 0;
		bool carry = false; 
		while (i < num1.length() or j < num2.length() or carry) {
			int curNum = 0;
			if (i < num1.length()) {
				curNum += ctoi(num1[i]);
				++i;
			}
			if (j < num2.length()) {
				curNum += ctoi(num2[j]);
				++j;
			}
			if (carry) {
				++curNum;
			}
			carry = curNum / 10;
			result += std::to_string(curNum % 10);
		}
		return result;
	}

};
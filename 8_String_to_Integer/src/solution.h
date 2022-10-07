#pragma once

#include <iostream>
#include <cmath>
#include <string>


class Solution {
public:
    int myAtoi(std::string s) {
        bool isNegative = false;
		int isSrarted = false;
		long result = 0;
		for (char c: s) {
			if (c == ' ' and !isSrarted) {
				continue;
			}
			if (c == '-' and !isSrarted) {
				isNegative = true;
				isSrarted = true;
				continue;
			}
			if ((c == '+') and !isSrarted) {
				isSrarted = true;
				continue;
			}
			if (c < '0' or c > '9') {
				break;
			}
			result = (result ? result * 10 : result) + (c - '0');
			if (isNegative and result > pow(2, 31)) {
				result = pow(2, 31);
			}
			if (!isNegative and result > pow(2, 31) - 1) {
				result = pow(2, 31) - 1;
			}
			
			isSrarted = true;
		}
		if (isNegative) {
			result *= -1;
		}
		return result;
    }
};

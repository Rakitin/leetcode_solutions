#pragma once

class Solution {
public:
	int addDigits(int num) {
		if (num < 10) {
			return num;
		}
		int tmp = 0;
		if (num / 10) {
			tmp += num % 10;
			num = num / 10;
		}
		tmp += num;
		return addDigits(tmp);
	}
};
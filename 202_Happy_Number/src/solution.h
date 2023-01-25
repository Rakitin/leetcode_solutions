#pragma once

#include <cmath>
#include <set>

class Solution {
public:
	bool isHappy(int n) {
		std::set<int> answers;
		
        while (answers.find(n) == answers.end()) {
			answers.insert(n);
			int tmp { 0 };
			while (n % 10 or n > 9) {
				tmp += pow(n % 10, 2);
				n = n / 10;
			}
            n = tmp;
		}
		return n == 1;
	}
};

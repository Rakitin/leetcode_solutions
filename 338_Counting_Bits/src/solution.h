#pragma once

#include <vector>

class Solution {
public:
    std::vector<int> countBits(int n) {
        std::vector<int> result;
        for (int i = 0; i <= n; ++i) {
            int count = 0;
            int tmp = i;
            while (tmp) {
				if (tmp % 2) {
					++count;
				}
				tmp /= 2;
            }
			result.push_back(count);
        }
		return result;
    }
};

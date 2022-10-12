#pragma once

#include <vector>

class Solution {
public:
    void duplicateZeros(std::vector<int>& arr) {
        for (int i = 0; i < arr.size(); ++i) {
			if (!arr[i]) {
				for (int j = arr.size() - 1; j > i; --j) {
					arr[j] = arr[j - 1];
				}
				++i;
			}
		}
    }
};
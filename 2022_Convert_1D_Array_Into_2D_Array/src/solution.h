#pragma once

#include <iostream>
		// std::cout << original.size() << std::endl;
		// std::cout << m * n << std::endl;

#include <vector>

class Solution {
public:
	// m - rows
	// n - columns
    std::vector<std::vector<int>> construct2DArray(std::vector<int>& original, int m, int n) {
        std::vector<std::vector<int>> result;
		if (original.size() != m * n) {
			return result;
		}
		for (int i = 0; i < m; ++i) {
			result.push_back(std::vector<int> {});
			for (int j = 0; j < n; ++j) {
				result[i].push_back(original[i * n + j]);
			}
		}
		return result;
    }
};

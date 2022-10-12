#pragma once

#include <vector>

class Solution {
public:
    bool searchMatrix(std::vector<std::vector<int>>& matrix, int target) {
        int l = 0;
		int r = matrix.size() - 1;
		int m;
		while (l <= r) {
			m = (r + l) / 2;
			if (target < matrix[m][0]) {
				r = m - 1;
			}
			else if (target > matrix[m][matrix[m].size() - 1]) {
				l = m + 1;
			}
			else {
				break;
			}
		}
		int row = m;
        l = 0;
		r = matrix[row].size() - 1;
		while (l <= r) {
			m = (r + l) / 2;
			if (target < matrix[row][m]) {
				r = m - 1;
			}
			else if (target > matrix[row][m]) {
				l = m + 1;
			}
			else {
				return true;
			}
		}
		return false;
    }
};

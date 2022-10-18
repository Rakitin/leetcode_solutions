#pragma once

#include <vector>


class Solution {
public:
    int climbStairs(int n) {
		std::vector<int> buf(n + 1, 0);
		return helper(n, buf);
    }

private:
	int helper(int n, std::vector<int> &buf)
	{
		if (n == 0) {
			return 1;
		}
		if (n == 1) {
			return 1;
		}
		if (n == 2) {
			return 2;
		}
		if (n == 3) {
			return 3;
		}

		if (buf[n]) {
			return buf[n];
		}
		buf[n] = helper(n - 1, buf) + helper(n - 2, buf);
		return buf[n];
		
	}

};

#pragma once

#include <stdint.h>

class Solution {
public:
    int reverse(int x) {
		int64_t result {0};
        while (x) {
			result = result ? result *10 : result;
			result += x % 10;
			if (result < INT32_MIN or result > INT32_MAX) {
				return 0;
			}
			x /= 10;
		}
		return result;
    }
};

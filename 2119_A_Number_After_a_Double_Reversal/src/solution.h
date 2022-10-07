#pragma once

class Solution {
public:
    bool isSameAfterReversals(int num) {
		return !num or num % 10 != 0;
    }
};

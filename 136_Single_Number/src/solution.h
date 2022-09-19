#pragma once

#include <vector>


class Solution {
public:
    int singleNumber(std::vector<int>& nums) {
        int a = 0;
        for (int i: nums) {
            a = a^i;
        }
        return a;
    }
};

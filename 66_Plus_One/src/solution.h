#pragma once

#include <iostream>

#include <vector>


class Solution {
public:
    std::vector<int> plusOne(std::vector<int>& digits) {
        std::vector<int> result(digits);
        bool carry = false;
        for (int i = result.size() - 1; i >= 0; --i) {
            result[i] += 1;
            if (result[i] > 9) {
                carry = true;
                result[i] = 0;
            }
            else {
                carry = false;
                break;
            }
        }
        if (carry) {
            result.insert(result.begin(), 1);
        }
        return result;
    }
};

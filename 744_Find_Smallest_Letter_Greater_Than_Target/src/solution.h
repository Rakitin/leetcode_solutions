#pragma once

#include <vector>


class Solution {
public:
    char nextGreatestLetter(std::vector<char>& letters, char target) {
        int l = 0;
        int r = letters.size() - 1;
        if (letters[r] <= target) {
            return letters[0];
        }

        while (l <= r) {
            int m = (l + r) / 2;
            if (letters[m] > target) {
                r = m - 1;
            }
            else {
                l = m + 1;
            }
        }
        return letters[l];
    }
};

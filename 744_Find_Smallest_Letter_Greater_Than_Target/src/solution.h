#pragma once

#include <vector>


class Solution {
public:
    char nextGreatestLetter(std::vector<char>& letters, char target) {
        char result = letters[0];
        for (char c: letters) {
            if (c > target) {
                return c;
            }
        }
        return result;
    }
};

#pragma once

#include <string>

class Solution {
public:
    int lengthOfLastWord(std::string s) {
        int count {0};

        for (int i = s.length() - 1; i >= 0; --i) {
            if (s[i] != ' ') {
                ++count;
            }
            else if (count) {
                break;
            }
        }

        return count;
    }
};

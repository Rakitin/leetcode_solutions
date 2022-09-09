#pragma once


#include <string>
#include <map>
#include <algorithm>

class Solution {
public:

    int lengthOfLongestSubstring(std::string s) {
        int result{0};
        int begin{0};
        std::map<char, int> position;
        for (int i = 0; i < s.length(); ++i) {
            if (!position.count(s[i]) || position[s[i]] < begin) {
                position[s[i]] = i;
            }
            else {
                begin = position[s[i]] + 1;
                position[s[i]] = i;
            }
            result = std::max((i + 1) - begin, result);
        }
        return result;
    }
};

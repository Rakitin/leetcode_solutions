#pragma once

#include <string>
#include <map>

class Solution {
public:
    int romanToInt(std::string s) {
        std::map<char, int> roman {
            {'M', 1000},
            {'D', 500},
            {'C', 100},
            {'L', 50},
            {'X', 10},
            {'V', 5},
            {'I', 1}
        };
        int result{0};
        int i{0};
        while (i < s.length()) {
            if (i + 1 < s.length()) {
                if (roman[s[i]] < roman[s[i + 1]]) {
                    result += roman[s[i + 1]] - roman[s[i]];
                    i += 2;
                    continue;
                }
            }
            result += roman[s[i]];
            i += 1;
        }

        return result;
    }
};

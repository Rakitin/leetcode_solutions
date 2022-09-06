#pragma once

#include <string>
#include <map>
#include <sstream>

class Solution {
public:
    std::string intToRoman(int num) {
        std::map<int, std::string> roman {
            {1000, "M"},
            {900, "CM"},
            {500, "D"},
            {400, "CD"},
            {100, "C"},
            {90, "XC"},
            {50, "L"},
            {40, "XL"},
            {10, "X"},
            {9, "IX"},
            {5, "V"},
            {4, "IV"},
            {1, "I"}
        };
        std::stringstream result;
        while (num) {
            for (auto it = roman.rbegin(); it != roman.rend(); ++it) {
                if (num - (*it).first >= 0) {
                    result << (*it).second;
                    num -= (*it).first;
                    break;
                }
            }
        }
        return result.str();
    }
};
